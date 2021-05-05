/* author : @akashsaini */

#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node *next;
};

struct node *head=NULL;

void begin_insert()
{
	struct node *ptr;
	int item;
	ptr=(struct node*)malloc(sizeof(struct node*));
	if(ptr==NULL)
	{
		cout<<"empty"<<"\n";
	}
	else
	{
		cout<<"Enter value : ";
		cin>>item;
		ptr->data=item;
		/*
		 ------------------------
		 |   data    |     ptr  |
		 ------------------------
		 */
		ptr->next=head;
		head=ptr;
	}

}

void display()
{
	struct node *ptr;
	ptr=head;
	if(ptr==NULL)
	{
		cout<<"Empty"<<"\n";
	}
	else
	{
		cout<<"node are : ";
		while(ptr!=NULL)
		{
			cout<<ptr->data<<" ";
			ptr=ptr->next;
		}
	}
	cout<<"\n";
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		begin_insert();
		cout<<"\n";
		display();
	}
	return 0;
}
