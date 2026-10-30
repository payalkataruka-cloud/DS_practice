// MENU DRIEVN PROGRAM TO IMPLEMENT STACK OPEARTION USING LINKEDLIST

#include<stdio.h>
#include<stdlib.h>
void push(int);
void pop();
void display();
struct node
{
    int info;
    struct node *next;
};

struct node *top = NULL;
int item;

void push(int item)
{
    struct node *ptr;

    ptr = (struct node *)malloc(sizeof(struct node));
	ptr->info=item;
    if (top == NULL)
    {
        top=ptr;
        ptr->next=NULL;
    }
    else
    {
    	ptr->next=top;
    	top=ptr;
	}

    printf("Element pushed successfully\n");
}

void pop()
{
    struct node *temp;
	
    if (top == NULL)
    {
        printf("Stack Underflow\n");
        return;
    }
	else
	{
		temp=top;
    	top = top->next;
    	printf("Deleted element: %d\n", temp->info);
    	display();
    	free(temp);
    }
    
}

void display()
{
    struct node *temp;
	temp=top;
    printf("Stack elements are:\n");
    while (temp->next != NULL)
    {
        printf("%d\n", temp->info);
        temp = temp->next;
    }
}

void main()
{
    int choice;
	char ch;
    do
    {
        printf("\n--- STACK MENU ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
            	printf("enetr element:");
            	scanf("%d",&item);
                push(item);
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Exiting program\n");
                exit(0);

            default:
                printf("Invalid choice\n");
        }
        printf("\nDO YOU WNAT TO CONTINUE(Y/N)?:");
        scanf(" %c",&ch);
    }while(ch=='y' || ch=='Y');// MENU DRIEVN PROGRAM TO IMPLEMENT STACK OPEARTION USING LINKEDLIST

#include<stdio.h>
#include<stdlib.h>
void push(int);
void pop();
void display();
struct node
{
    int info;
    struct node *next;
};

struct node *top = NULL;
int item;

void push(int item)
{
    struct node *ptr;

    ptr = (struct node *)malloc(sizeof(struct node));
	ptr->info=item;
    if (top == NULL)
    {
        top=ptr;
        ptr->next=NULL;
    }
    else
    {
    	ptr->next=top;
    	top=ptr;
	}

    printf("Element pushed successfully\n");
}

void pop()
{
    struct node *temp;
	
    if (top == NULL)
    {
        printf("Stack Underflow\n");
        return;
    }
	else
	{
		temp=top;
    	top = top->next;
    	printf("Deleted element: %d\n", temp->info);
    	display();
    	free(temp);
    }
    
}

void display()
{
    struct node *temp;
	temp=top;
    printf("Stack elements are:\n");
    while (temp->next != NULL)
    {
        printf("%d\n", temp->info);
        temp = temp->next;
    }
}

void main()
{
    int choice;
	char ch;
    do
    {
        printf("\n--- STACK MENU ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
            	printf("enetr element:");
            	scanf("%d",&item);
                push(item);
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Exiting program\n");
                exit(0);

            default:
                printf("Invalid choice\n");
        }
        printf("\nDO YOU WNAT TO CONTINUE(Y/N)?:");
        scanf(" %c",&ch);
    }while(ch=='y' || ch=='Y');
}
}
