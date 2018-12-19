#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
	node *linking;
}*g1;


void del()
{
	node *p;
	if(g1==NULL)
    {
		cout<<"no element";
	}
	else
	{
		p=g1;
		g1=p->linking;
		delete(p);
	}
}
void insert(int n)
{
	node *p;
	p=(node*)malloc(sizeof(p));
	p->data=n;
	p->linking=NULL;
	if(p==NULL){
		cout<<"overflow";
	}
	else
    {
		p->linking=g1;
		g1=p;
	}
}
void display(){
	node *p;
	if(g1==NULL)
        {
		cout<<"no element";
        }
		else
		{
			for(p=g1;p!=NULL;p=p->linking)
			{
				cout<<p->data<<"\n";
			}
		}
}

void search()
{
    struct node *ptr;
    int item,i=0,f;
    ptr = g1;
    if(ptr == NULL)
    {
        cout<<"\nEmpty List\n";
    }
    else
    {
        cout<<"\nEnter Number you want to search\n";
        cin>>item;
        while (ptr!=NULL)
        {
            if(ptr->data==item)
            {
                cout<<"Your item is at index "<<i+1;
                f=0;
            }
            else
            {
                f=1;
            }
            i++;
            ptr=ptr->linking;
        }
        if(f==1)
        {
            cout<<"\nNo such item exist\n";
        }
    }
}

int main()
{
	int n,ch;
	while(ch!=5){
	cout<<"1.Click 1 for insertion \n";
    cout<<"2.Click 2 for display\n";
	cout<<"3.Click 3 for search\n";
	cout<<"4.Click 4 for deletion \n";
	cout<<"5.Click 5 for exit";
	cout<<"\nenter choice 1,2,3,4\n";
	cin>>ch;
	switch(ch)
	{
	case 1:
	    cout<<"\nenter element";
		cin>>n;
		insert(n);
        break;
	case 2:
	display();
	break;
	case 3:
		search();
		break;
	case 4:
	del();
	break;
	case 5:
        exit(1);
	default:
		cout<<"Wrong Option\n";
	}
 }
	return 0;
}
