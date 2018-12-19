#include<iostream>
#define MAX 50
using namespace std;
int rear=-1,front=-1,queue_array[MAX],i;
searchh()
{
    int search_item;
    if(front==-1)
    {
        cout<<"Don't waste your time\n";
    }
    else
    {
        cout<<"Enter the item to be search:\n";
        cin>>search_item;
        for(i=front;i<=rear;i++)
        {
            if(queue_array[i]==search_item)
            {
                cout<<"Number is in the queue\n\n\n";
            }
            else
            {
                cout<<"Number is not present\n";
            }
        }
    }
}
insertt()
{
    int item;
    if(rear==MAX-1)
    {
        cout<<"\nYou cannot insert because your queue is already full\n";
    }
    else
    {
        if(front==-1)
        {
            front=0;
        }
             cout<<"Insert the item\n";
            cin>>item;
            rear=rear+1;
            queue_array[rear]=item;

    }
}
deletee()
{
    if(front==-1||front>rear)
    {
        cout<<"Queue is already empty";
    }
    else
    {
        cout<<"Item deleted\n";
        front=front+1;
    }
}
display()
{
    if(front==-1)
    {
        cout<<"Queue is empty  NOTHING to display\n";
    }
    else
    {
        int i;
        cout<<"Queue is:\n";
        for(i=front;i<=rear;i++)
        {
            cout<<queue_array[i];
            cout<<"\n";
        }
    }

}

int main()
{
    int ch,rear=-1,front=-1;
    int queue_array[MAX];
    while(1)
    {
        cout<<"1.Insert element into queue\n";
        cout<<"2.Delete element from queue\n";
        cout<<"3.Search element from queue\n";
        cout<<"4.Display element of queue\n";
        cout<<"Enter your choice\n";
        cin>>ch;
        switch(ch)
        {
        case 1:
            insertt();
            break;
        case 2:
            deletee();
            break;
        case 3:
            searchh();
            break;
        case 4:
            display();
            break;
        case 5:
            exit(1);
        default:
            cout<<"\nThis is wrong choice\n";
        }
    }
}
