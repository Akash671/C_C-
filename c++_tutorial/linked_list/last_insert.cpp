#include<iostream>
using namespace std;

struct node
{
	int data;
	struct node *next;
};

struct node *head=NULL;

void insert_node()
{
    struct node *ptr,*temp;
    ptr=(struct node*)malloc(sizeof(struct node*));
    if(ptr==NULL)
    {
    	cout<<"Empty";
    }
    else
    {
    	cout<<"Enter your data  : ";
    	int item;
    	cin>>item;
    	ptr->data=item;
    	if(head==NULL)
    	{
    		ptr->next=NULL;
    		head=ptr;
    	}
    	else
    	{
    	//	struct node *temp;
    		temp=head;
    		while(temp->next!=NULL)
    		{
    			temp=temp->next;
    		}
    		temp->next=ptr;
    		ptr->next=NULL;
    	//	head=ptr;
    	}
    }
}

void display()
{
	struct node *ptr=head;
	if(ptr==NULL)
	{
		cout<<"\nEmpty";
	}
	else
	{
	   //cout<<"\n";
		while(ptr!=NULL)
		{
			cout<<ptr->data<<" ";
			ptr=ptr->next;
		}
	}
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		insert_node();
		//cout<<"\n";
		display();
		cout<<"\n";
	}
	return 0;
}
