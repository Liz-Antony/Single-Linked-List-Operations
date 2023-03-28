#include<stdlib.h>
#include <stdio.h>

//function declarations
void display();
void insert_First();
void insert_Last();
void insert_AnyWhere();
void delete_First();
void delete_Last();
void delete_Anyone();
void searchElement();
void createLinkedList();


//creating node for storing data and link part of linked list
struct node
{
    int data;
    struct node *next;
};

//header node creation
struct node *head=NULL;

int main()
{   
    int numberofElements;
	printf("Enter the size of linked list:");
	scanf("%d",&numberofElements);
	for(int i=0;i<numberofElements;i++)
	{
	 createLinkedList();
	}


    int choice;

    while(1) {
        //Options table run continousily after execution of each task until press 9 to exit
        printf("\n==========================================\n");
        printf("\n 1> Display    \n");
        printf("\n 2> Insert First   \n");
        printf("\n 3> Insert Last  \n");
        printf("\n 4> Insert Anywhere       \n");
        printf("\n 5> Delete First      \n");
        printf("\n 6> Delete Last      \n");
        printf("\n 7> Delete Anyone    \n");
		printf("\n 8> Search    \n");
        printf("\n 9> Exit  ");
        printf("\n===========================================\n");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
		    display();
            break;
           
        case 2:
		     insert_First();
             break;
        case 3:
		    insert_Last();
            break;
           
        case 4:
		    insert_AnyWhere();
            break;
            
        case 5:
              delete_First();
            break;
        case 6:
              delete_Last();
              break;
        case 7:
             delete_Anyone();
             break;
        case 8:
              searchElement();
			  break;

        case 9:
            exit(0);
            break;

        default:
            printf("\n Wrong Choice !\n");
            break;
        }
    }
    return 0;
}

//Function to create linked list
void createLinkedList()
{
    struct node *temp,*pt;
    temp=(struct node *)malloc(sizeof(struct node));
    if(temp==NULL)
    {
        printf("\nOut of Memory Space:\n");
        exit(0);
    }
    printf("\nEnter the data value for the node: ");
    scanf("%d",&temp->data);
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        pt=head;
        while(pt->next!=NULL)
        {
            pt=pt->next;
        }
        pt->next=temp;
    }
}





//Method to search whether a value is in list
void searchElement()
{
    int value;
	
	// Initializing current
    struct node* curr = head;  
    int index = 0;
	printf("\n Enter element to search: ");
    scanf("%d", &value);
    
    
    //  Search upto the end of the linked list
    while (curr != NULL)
    {
        if (curr->data == value)
		    {
              printf("\nItem found at position:  %d \n",index+1);
            }
	    
	
        curr = curr->next;
        index++;
    }
	
		   
}







//Function to display the linked list
void display()
{
    struct node *pt;
    if(head==NULL)
    {
        printf("\nList is empty:\n");
        return;
    }
    else
    {
        pt=head;
        printf("\nThe List elements are:\n");
        while(pt!=NULL)
        {
            printf("%d\t",pt->data );
            pt=pt->next ;
        }
    }
}

//Function insert a node at the first position of linked list
void insert_First()
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    if(temp==NULL)
    {
        printf("\nOut of Memory Space:\n");
        return;
    }
    printf("\nEnter the data value for the node: " );
    scanf("%d",&temp->data);
    temp->next =NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        temp->next=head;
        head=temp;
    }
}

//Function insert a node at the last position of linked list
void insert_Last()
{
    struct node *temp,*pt;
    temp=(struct node *)malloc(sizeof(struct node));
    if(temp==NULL)
    {
        printf("\nOut of Memory Space:\n");
        return;
    }
    printf("\nEnter the data value for the node: " );
    scanf("%d",&temp->data );
    temp->next =NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        pt=head;
        while(pt->next !=NULL)
        {
            pt=pt->next;
        }
        pt->next =temp;
    }
}

//Function insert a node at the specific position of linked list
void insert_AnyWhere()
{
    struct node *pt,*temp;
    int i,position;
    temp=(struct node *)malloc(sizeof(struct node));
    if(temp==NULL)
    {
        printf("\nOut of Memory Space:\n");
        return;
    }
    printf("\nEnter the position for the new node to be inserted: ");
    scanf("%d",&position);
    position-=1;
    printf("\nEnter the data value of the node:");
    scanf("%d",&temp->data) ;

    temp->next=NULL;
    if(position==0)
    {
        temp->next=head;
        head=temp;
    }
    else
    {
        for(i=0,pt=head; i<position-1; i++) {
            pt=pt->next;
            if(pt==NULL)
            {
                printf("\nPosition not found\n"); 
                return;
            }
        }
        temp->next =pt->next;
        pt->next=temp;
    }
}

//Function that delete from beginning of linked list
void delete_First()
{
    struct node *pt;
    if(pt==NULL)
    {
        printf("\nList is Empty:\n");
        return;
    }
    else
    {
        pt=head;
        head=head->next ;
        printf("\nThe deleted element is :%d\t",pt->data);
        free(pt);
    }
}

//Function that delete from end of linked list
void delete_Last()
{
    struct node *temp,*pt;
    if(head==NULL)
    {
        printf("\nList is Empty:");
        exit(0);
    }
    else if(head->next==NULL)
    {
        pt=head;
        head=NULL;
        printf("\nThe deleted element is:%d\t",pt->data);
        free(pt);
    }
    else
    {
        pt=head;
        while(pt->next!=NULL)
        {
            temp=pt;
            pt=pt->next;
        }
        temp->next=NULL;
        printf("\nThe deleted element is:%d\t",pt->data);
        free(pt);
    }
}

//Function that delete from specific position in linked list
void delete_Anyone()
{
    int i,position;
    struct node *temp,*pt;
    if(head==NULL)
    {
        printf("\nThe List is Empty:\n");
        exit(0);
    }
    else
    {
        printf("\nEnter the position of the node to be deleted: ");
        scanf("%d",&position);
        position-=1;
        if(position==0)
        {
            pt=head;
            head=head->next ;
            printf("\nThe deleted element is:%d\t",pt->data  );
            free(pt);
        }
        else
        {
            pt=head;
            for(i=0; i<position; i++) {
                temp=pt;
                pt=pt->next ;
                if(pt==NULL)
                {
                    printf("\nPosition not Found:\n");
                    return;
                }
            }
            temp->next =pt->next;
            printf("\nThe deleted element is:%d\t",pt->data );
            free(pt);
        }
    }
}

