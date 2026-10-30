// MENU DRIEVN PROGRAM TO IMPLEMENT STACK OPEARTION USING LINKEDLIST

#include<stdio.h>
#include<stdlib.h>
void enqueue(int);
int dequeue();
void display();
struct node
{
    int info;
    struct node *next;
};

struct node *rear = NULL;
struct node *front=NULL;
int item;

void enqueue(int item)
{
    struct node *ptr;

    ptr = (struct node *)malloc(sizeof(struct node));
	ptr->info=item;
    if (rear == NULL)
    {
        rear=front=ptr;
        ptr->next=NULL;
    }
    else
    {
    	rear->next=ptr;
    	rear=ptr;
	}

    printf("Element pushed successfully\n");
}

int dequeue()
{
    struct node *temp;
	
    if (front == NULL)
    {
        exit(0);
    }
	else
	{
		temp=front;
    	front = front->next;
    	temp->next=NULL;
    	int value=temp->info;
    	free(temp);
    	return value;
    }
    
}

void display()
{
    struct node *ptr;
	ptr=front;
    printf("QUEUE ELEMENTS ARE:\n");
    while (ptr!=NULL)
    {
        printf("%d\n", ptr->info);
        ptr = ptr->next;
    }
}

void main()
{
    int choice;
	char ch;
    do
    {
        printf("\n--- QUEUE MENU ---\n");
        printf("1. ENQUEUE\n");
        printf("2. DEQUEUE\n");
        printf("3. DISPLAY\n");
        printf("4. EXIT\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
            	printf("ENTER ELEMENT:");
            	scanf("%d",&item);
                enqueue(item);
                break;

            case 2:
                printf("DELETED ELEMENT IS %d",dequeue());
                break;

            case 3:
                display();
                break;

            case 4:
                exit(0);

            default:
                printf("Invalid choice\n");
        }
        printf("\nDO YOU WNAT TO CONTINUE(Y/N)?:");
        scanf(" %c",&ch);
    }while(ch=='y' || ch=='Y');
}
