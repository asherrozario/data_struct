#include<iostream>
using namespace std;
int main()
{
	 
	int size,element;
	cout<<"Enter size of queue";
    cin>>size;
	int rear,front,queue[size];
	front=0;
    rear=0;
	int choise;
    while(1)
    {
	cout<<"Enter choise \n"
    	<<"Press 1 for insertion\n"
    	<<"Press 2 for deletion\n"
    	<<"Press 3 for display\n"
    	<<"Press 4 to exit\n";
    cin>>choise;
     
    
        switch(choise)
        {
            case 1 :
   					 if(rear==size)
    				{
        					cout<<"Queue overflow";
   					 }
   					 else
   					 {
        				
       					 cout<<"Enter element";
       					 cin>>element;
       					 queue[rear]=element;
        					++rear;
    				}
                    break;
            case 2 : 
   						 if(front==rear)
   						 {
        					cout<<"Queue underflow";
   						 }
    					else
    					{
       						 cout<<"Element delete="<<queue[front];
     						   for(int i=front;i<rear;++i)
       							 {
      							      queue[i]=queue[i+1];
        						}
        						--rear;
   						 }
                    break;
            case 3 : 
    					if(front==rear)
    					{
     						   cout<<"Queue is empty";
    					}
   						 else
   						 {
       						 cout<<"Queue is\n";
       						 for(int i=front;i<rear;++i)
       						 {
        					    cout<<queue[i]<<"\t";
        					}
    					}
                    break;
            case 4 : exit(1);
            default : cout<<"Wrong choise";
        }
    }
     
}
