var express = require("express");
var router = express.Router();
var passport = require("passport");
var LocalStrategy = require("passport-local").Strategy;

var User = require("../model/user");
var Student = require("../model/student");
var Instructor = require("../model/instructor");

router.get("/register", function(req, res, next) {
  res.render("users/register");
});

router.post("/register", (req, res, next) => {
  var first_name = req.body.first_name;
  var last_name = req.body.last_name;
  var street_address = req.body.street_address;
  var city = req.body.city;
  var state = req.body.state;
  var zip = req.body.zip;
  var email = req.body.email;
  var username = req.body.username;
  var password = req.body.passwrod;
  var password2 = req.body.password2;
  var type = req.body.type;

  req.checkBody("first_name", "First name field is required").notEmpty();
  req.checkBody("last_name", "Last name field is required").notEmpty();
  req.checkBody("email", "Email field is required").notEmpty();
  req.checkBody("email", "Email must be a valid email address").isEmail();
  req.checkBody("username", "Username field is required").notEmpty();
  req.checkBody("password", "Password field is required").notEmpty();
  req.checkBody("password2", "Passwords do not match").equals(req.body.password);
  // check('first_name').notEmpty()
  // check('last_name').notEmpty()
  // check('email').notEmpty()
  // check('email').isEmail()
  // check('username').notEmpty()
  // check('password').notEmpty()
  // check('password2').equals(req.body.password)
const errors = req.validationErrors()
  
  if (errors) {
    res.render("/users/register", {
      error: errors
    });
  } else {
    var newUser = new User({
      email: email,
      username: username,
      password: password,
      type: type
    });
    if (type == "student") {
      console.log("Registering Student..");
      var newStudent = new Student({
        first_name: first_name,
        last_name: last_name,
        address: [
          {
            street_address: street_address,
            city: city,
            state: state,
            zip: zip
          }
        ],
        email: email,
        username: username
      });
      User.saveStudent(newUser, newStudent, function(err, user) {
        console.log("Student Created");
      });
    } else {
      console.log("Registering Instructor..");
      var newInstructor = new Instructor({
        first_name: first_name,
        last_name: last_name,
        address: [
          {
            street_address: street_address,
            city: city,
            state: state,
            zip: zip
          }
        ],
        email: email,
        username: username
      });
      User.saveInstructor(newUser, newInstructor, function(err, user) {
        console.log("Instructor Created");
      });
    }
    req.flash("Success", "User Added");
    res.redirect("/");
  }
});
module.exports = router;
