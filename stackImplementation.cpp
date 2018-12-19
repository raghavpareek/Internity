#include<iostream>
#define CAPACITY 5
using namespace std;
int stackk[CAPACITY],top=-1;
int isFull();
int isEmpty();
void push(int n)
{
    if(isFull())
        cout<<"\nStack is Full\n";
    else
    {
        top++;
        stackk[top]=n;
        cout<<"Inserted element is: "<<n;
    }
}
 pop()
{
    if(isEmpty())
        return 0;
    else
    {
        int n;
        n=stackk[top];
        top--;
    }
    return top;
}
void traverse()
{
    int i;
    if(isEmpty())
        cout<<"\nNothing in the stack";
    else
    {
    for(i=0;i<=top;i++)
    {
        cout<<stackk[i]<<"  ";
    }
    }
}
 int isFull()
{
    if(top==CAPACITY-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}
 int isEmpty()
{
    if(top==-1)
        return 1;
    else
        return 0;
}
int main()
{
    int choice;
    while(1)
    {
    cout<<"\n1. Push\n";
    cout<<"2. Pop\n";
    cout<<"4. Traverse\n";
    cout<<"5. Exit\n";
    cout<<"\n\n";
    cout<<"Enter Your Choice:\n";
    cin>>choice;
     switch(choice)
    {
    case 1:
        int n;
        cout<<"Enter the elements to push:\n\n";
        cin>>n;
        push(n);
        break;
    case 2:
        n=pop();
        if(n==0)
        {
            cout<<"stack is underflow";
        }
        else
        {
            cout<<"popped item is: ";
        }
        break;
    case 4:
        traverse();
        break;
    case 5:
        exit(0);
    default:
        cout<<"\nInvalid Option";
    }
  }
}
