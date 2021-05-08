/* author : @akashsaini */

#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node *next;
};

struct node *head=NULL;

void insert_node_beg()
{
	struct node *ptr;
	ptr=(struct node*)malloc(sizeof(struct node*));
	if(ptr==NULL)
	{
	    cout<<"+------+";
		cout<<"overflow";
		cout<<"+------+";
	}
	else
	{
		int item;
		cout<<"Enter data : ";
		cin>>item;
		ptr->data=item;
		ptr->next=head;
		head=ptr;
	}
}

void insert_node_last()
{
	struct node *ptr,*temp;
	ptr=(struct node*)malloc(sizeof(struct node*));
	if(ptr==NULL)
	{
		cout<<"+------+";
	    cout<<"overflow";
	    cout<<"+------+";
	}
	else
	{
	    cout<<"Enter data : ";
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
	    	temp=head;
	    	while(temp->next!=NULL)
	    	{
	    		temp=temp->next;
	    	}
	    	temp->next=ptr;
	    	ptr->next=NULL;
	    }
	}
}

void insert_node_at_position()
{
	struct node *ptr,*temp;
	ptr=(struct node*)malloc(sizeof(struct node*));
	if(ptr==NULL)
	{
		cout<<"+------+";
		cout<<"overflow";
		cout<<"+------+";
	}
	else
	{
		cout<<"Enter data : ";
		int item;
		cin>>item;
		ptr->data=item;
		cout<<"Enter Location : ";
		int loc;
		cin>>loc;
		temp=head;
		for(int i=0;i<loc;++i)
		{
			temp=temp->next;
			if(temp==NULL)
			{   cout<<"+----------+";
				cout<<"can't insert";
				cout<<"+----------+";
				return;
			}
		}
		ptr->next=temp->next;
		temp->next=ptr;
	}
}

void delete_from_begin()
{
	struct node *ptr;
	if(ptr==NULL)
	{
		        cout<<"+------+";
				cout<<"overflow";
				cout<<"+------+";
	}
	else
	{
		ptr=head;
		head=ptr->next;
		free(ptr);
	}
}

void delete_from_last()
{
	struct node *ptr,*temp;
	if(head==NULL)
	{
		        cout<<"+------+";
				cout<<"overflow";
				cout<<"+------+";
	}
	else if(head->next==NULL)
	{
		head=NULL;
		free(head);
	}
	else
	{
		ptr=head;
		while(ptr->next!=NULL)
		{
			temp=ptr;
			ptr=ptr->next;
		}
		temp->next=NULL;
		free(ptr);
	}
}

void delete_from_location()
{
	struct node *ptr,*temp;
	cout<<"Enter location to delete node : ";
	int loc;
	cin>>loc;
	ptr=head;
	for(int i=0;i<loc;++i)
	{
		temp=ptr;
		ptr=ptr->next;
		if(ptr==NULL)
		{   cout<<"+-----------+";
			cout<<"can't delete";
			cout<<"+---------- +";
			return;
		}
	}
	temp->next=ptr->next;
	free(ptr);
}

void search()
{
	struct node *ptr;
	ptr=head;
	if(ptr==NULL)
	{
	         	cout<<"+------+";
				cout<<"overflow";
				cout<<"+------+";
	}
	else
	{
		cout<<"Enter search element : ";
		int item;
		cin>>item;
		int flag=1;
		int i=0;
		while(ptr!=NULL)
		{
			if(ptr->data==item)
			{
			    cout<<"+--------------------+";
				cout<<"found at location "<<i+1;
				cout<<"+--------------------+";
				flag=0;
			}
			i++;
			ptr=ptr->next;
		}
		if(flag)
		{
		    cout<<"+--------+";
			cout<<"not found";
			cout<<"+--------+";
		}
	}
}

void display()
{
	struct node *ptr;
	ptr=head;
	if(ptr==NULL)
	{
		        cout<<"+------+";
				cout<<"empty";
				cout<<"+------+";
	}
	else
	{
	   cout<<"+-----------------+ ";
		while(ptr!=NULL)
		{
			cout<<ptr->data<<" ";
			ptr=ptr->next;
		}
	   cout<<"+----------------+";
	}
}

int main()
{
	while(1)
	{
	    cout<<"1.insert node in begining\n";
	    cout<<"2.insert node in last\n";
	    cout<<"3.insert node at location\n";
	    cout<<"4.display node\n";
	    cout<<"5.exit\n";
	    cout<<"6.delete from begin\n";
	    cout<<"7.delete from last\n";
	    cout<<"8.delete from a location\n";
	    cout<<"9.search data\n";
	    cout<<"Enter operation : ";
	    int op;
	    cin>>op;
		if(op==1)
		{
			insert_node_beg();
			cout<<"\n";
		}
		else if(op==2)
		{
			insert_node_last();
			cout<<"\n";
		}
		else if(op==3)
		{
			insert_node_at_position();
			cout<<"\n";
		}
		else if(op==4)
		{
			display();
			cout<<"\n";
		}
		else if(op==5)
		{
			break;
		}
		else if(op==6)
		{
			delete_from_begin();
			cout<<"\n";
		}
		else if(op==7)
		{
			delete_from_last();
			cout<<"\n";
		}
		else if(op==8)
		{
			delete_from_location();
			cout<<"\n";
		}
		else if(op==9)
		{
			search();
			cout<<"\n";
		}
		else
		{
		    cout<<"+---------------+";
			cout<<"wrong operation\n";
			cout<<"+---------------+";
		}
	}
	return 0;
}
