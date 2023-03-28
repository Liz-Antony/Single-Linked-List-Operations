#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};
struct node *header=NULL;
void create()
{
    struct node *temp,*ptr;
    temp=(struct node *)malloc(sizeof(struct node));
    if(temp==NULL)
    {
        printf("\nOut of Memory Space:\n");
        exit(0);
    }
    printf("\nEnter the data value for the node: ");
    scanf("%d",&temp->data);
    temp->link=NULL;
    if(header==NULL)
    {
        header=temp;
    }
    else
    {
        ptr=header;
        while(ptr->link!=NULL)
        {
            ptr=ptr->link;
        }
        ptr->link=temp;
    }
}

void display(struct node* node){

    //as linked list will end when Node is Null
    while(node!=NULL)
    {
        printf("%d ",node->data);
        node = node->link;
    }
    printf("\n");
}

void searchElement()
{
    int item;
    struct node* current = header;  // Initialize current
    int index = 0;
	printf("Enter element to search: ");
    scanf("%d", &item);
    
    
    // traverse till then end of the linked list
    while (current != NULL)
    {
        if (current->data == item)
		    {
              printf("Item found at position:%d",index+1);
            }
			
        current = current->link;
        index++;
    }
	
		   
}


int main()
{
    
    
         create();
         create();
	     create();   
		 create();
    
    printf("Linked List: ");
    display(header);
	searchElement(); 
    
    return 0; 
}

