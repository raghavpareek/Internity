var express = require("express");
var path = require("path");

var bodyParser = require("body-parser");
var exphbs = require("express-handlebars");
var expressValidator = require("express-validator");
// const { check, validationResult } = require('express-validator');
// console.log(expressValidator)
var flash = require("connect-flash");
var session = require("express-session");

var passport = require("passport");
var LocalStrategy = require("passport-local").Strategy;
var mongo = require("mongodb");

var mongoose = require("mongoose");
mongoose.connect("mongodb://localhost/elearn", {
  useNewUrlParser: true,
  useUnifiedTopology: true
});
var db = mongoose.connection;

async = require("async");
var routes = require("./routes/index");
var users = require("./routes/users");
var classes = require("./routes/classes");

var app = express();
app.set("views", path.join(__dirname, "views"));
app.engine("handlebars", exphbs({ defaultLayout: "layout" }));
app.set("view engine", "handlebars");

app.use(bodyParser.json());
app.use(bodyParser.urlencoded({ extended: false }));
app.use(express.static(path.join(__dirname, "public")));

app.use(
  session({
    secret: "secret",
    saveUninitialized: true,
    resave: true
  })
);
app.use(passport.initialize());
app.use(passport.session());

app.use(
  expressValidator({
    errorFormatter: function(param, msg, value) {
      var namespace = param.split("."),
        root = namespace.shift(),
        formParam = root;

      while (namespace.length) {
        formParam += "[" + namespace.shift() + "]";
      }
      return {
        param: formParam,
        msg: msg,
        value: value
      };
    }
  })
);

app.use(flash());
app.use(function(req, res, next) {
  res.locals.messages = require("express-messages")(req, res);
  next();
});

app.use("/", routes);
app.use("/users", users);
app.use("/classes", classes);

app.listen(3000, () => {
  console.log("server listening on 3000");
});
module.exports = app;
