#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;
	class node
	{
		public:
			int value;
			node *next;
	};
class link_list
{
	node *start,*ptr,*tptr;
	public:

		link_list()
		{
			start=NULL;
			ptr=NULL;
		}
		void add_node_last(int n)
		{
			node *temp=new node;
			temp->value=n;
			temp->next=NULL;
			if(start==NULL)
				{
					start=temp;
					ptr=temp;
				}
			else
			{
				ptr->next=temp;
				ptr=ptr->next;
				
			}
		}
		void add_node_begning(int n)
		{
			node *temp= new node;
			temp->value=n;
			temp->next=start;
			start=temp;
		}
		void add_node_before_value(int n,int Value)
		{
			node *temp=new node;
			ptr=start;
			while(temp->value!=Value)
			{
				tptr=ptr;
				ptr=ptr->next;
			}
			temp->value=n;
			temp->next=ptr;
		}
		void add_node_after_value(int n,int Value)
		{
			node *temp=new node;
			ptr=start;
			while(temp->value!=Value)
			{
				ptr=ptr->next;
			}
			temp->value=n;
			temp->next=ptr->next;
			ptr=temp;
		}
		void delete_node(int Value)
		{
			ptr=start;
		
			if(start==NULL)
				cout<<"Link list empty";
			else
			{
				
				while(ptr->value!=Value)
				{
					tptr=ptr;
					ptr=ptr->next;
				}
				if(ptr->next==NULL)
				{
					tptr=NULL;
					delete(ptr);
				}
				else
				{
					tptr=ptr->next;
					delete(ptr);
				}
				
			}
		}
		void display()
		{
			struct node *temp;
			temp=start;
			if(start==NULL)
				cout<<"Array empty";
			else
			{
				while(temp!=NULL)
				{
					cout<<temp->value<<"->";
					temp=temp->next;
				}
			}
		}
		
};
int main()
{
	int choise,value,sample;
	link_list a;
	while(1)
	{
        cout<<endl<<"Operations on singly linked list"<<endl;
        cout<<"1.Insert Node at beginning"<<endl;
        cout<<"2.Insert node at last"<<endl;
        cout<<"3.Insert node before value"<<endl;
        cout<<"4.Insert node after value"<<endl;
        //cout<<"5.Sort Link List"<<endl;
        cout<<"6.Delete a Particular Node"<<endl;
        //cout<<"7.Update Node Value"<<endl;
        //cout<<"8.Search Element"<<endl;
        cout<<"9.Display Linked List"<<endl;
        //cout<<"10.Reverse Linked List "<<endl;
        cout<<"11.Exit "<<endl;
        cout<<"Enter your choice : ";
        cin>>choise;
	
	switch(choise)
	{
		case 1 : 
			cout<<"Enter value to be inserted";
			cin>>value;
			a.add_node_begning(value);
			break;
		case 2 :
			cout<<"Enter value to be inserted";
			cin>>value;
			a.add_node_last(value);
			break;
		case 3 :
			cout<<"Enter value to be inserted";
			cin>>value;
			cout<<"Enter value before which u want to insert";
			cin>>sample;
			a.add_node_before_value(value,sample);
			break;
		case 4 :
			cout<<"Enter value to be inserted";
			cin>>value;
			cout<<"Enter value before which u want to insert";
			cin>>sample;
			a.add_node_after_value(value,sample);
			break;
		case 6 :
			cout<<"Enter value to be deleted";
			cin>>value;
			a.delete_node(value);
			break;
		case 9 :
			a.display();
			break;
		case 11 :
			cout<<"Exiting"<<endl;
            exit(1);
            break;  
        default : cout<<"Ivalid Input";
	}}
	return 0;
}

