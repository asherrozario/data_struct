#include <stdio.h>

struct node
{
    struct node *prev,*next;
    int data;
};

struct node *start = NULL;

void insert(int value)
{
    struct node *ptr,  *temp = start;
    ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = value;
    ptr->next = NULL;
	ptr->prev = NULL;
    if (start == NULL)
    {
        start = ptr;
    } 
    else
    {
        
        while (temp->next != NULL)
            temp = temp->next;

        ptr->prev = temp;
        temp->next = ptr;
    }
}
void insert_at_begning(int value)
{
    struct node *ptr;
    ptr = (struct node*)malloc(sizeof(struct node));
    ptr->prev = NULL;
    ptr->data = value;
    ptr->next = start;
    if (start != NULL)
        start->prev = ptr;
    start = ptr;
}
void Delete(int value)
{
    struct node *temp = start;
    while (temp != NULL)
    {
        if (temp->data == value)
        {
            
            if (temp == start)
            {
                start = start->next;
                start->prev = NULL;
            } 
            else
            {
              
                if (temp->next == NULL)
                    temp->prev->next = NULL;
                else
               
                {
                    temp->prev->next = temp->next;
                    temp->next->prev = temp->prev;
                }
                free(temp);
            }
            return ; 
        }
        temp = temp->next;
    }
    printf("\n%d not found.", value);
}
void display()
{
	 struct node *temp;
            temp=start;
            if(start==NULL)
                printf("Array is empty");
            else
            {
                while(temp!=NULL)
                {
                    printf("%d list is:",&temp);
                    temp=temp->next;
                }
            }
}
int main()
{
    int n, ch;
    while(1)
    {
        printf("\n1. insert \n2. insert at beginning \n3. Delete\n4. Display\n0. Exit\n");
        printf("\nEnter Choice");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
                printf("\nEnter number: ");
                scanf("%d",&n);
                insert(n);
                break;
            case 2:
                printf("\nEnter number: ");
                scanf("%d", &n);
                insert_at_begning(n);
                break;
            case 3:
            	printf("\nEnter number to delete: ");
                scanf("%d", &n);
                Delete(n);
                break;
            case 4:
                display();
                break;
            case 0:
            	printf("Exiting\n");
            	exit(1);
            	break;
			 default : printf("Invalid choise");  
        }
    }
    return 0;
}



