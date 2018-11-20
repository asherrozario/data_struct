#include <iostream>
using namespace std;
int main()
{
	int size,element;
	cout<<"Enter size of stack";
    cin>>size;
	int top,bottom,stack[size];
	bottom=0;
    top=0;
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
   					 if(top==size)
    				{
        					cout<<"Stack overflow\n";
   					 }
   					 else
   					 {
        				
       					 cout<<"Enter element\n";
       					 cin>>element;
       					 stack[top]=element;
        					top++;
    				}
                    break;
            case 2 : 
   						 if(bottom==top)
   						 {
        					cout<<"Queue underflow\n";
   						 }
    					else
    					{
       						 cout<<"Element delete="<<stack[top];
        						--top;
   						 }
                    break;
            case 3 : 
    					if(bottom==top)
    					{
     						   cout<<"Stack is empty\n";
    					}
   						 else
   						 {
       						 cout<<"Stack is\n";
       						 for(int i=bottom;i<top;++i)
       						 {
        					    cout<<stack[i]<<"\t";
        					}
    					}
                    break;
            case 4 : exit(1);
            default : cout<<"Wrong choise";
        }
    }
     
}

