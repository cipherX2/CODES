#include <stdio.h>

//Creating a linked list 
typedef struct node
{
    int data;
    struct node *next;
} llist;

//Declaring and Defining head pointer
llist *head = NULL;

void create();
void display();

void main()
{
    create();
    display();
}

void create()
{
    int num, choice;
    llist *new, *temp;
    choice = 1;
    while (choice)
    {
        //Here allocating memory, and address is assigned to new.
        new = (llist *)malloc(sizeof(llist));
        printf("Enter value: ");
        scanf("%d", &num);
        new->data = num;
        new->next = NULL;
        if (head == NULL)
        {
            head = temp = new;
        }
        else
        {
            //We use temp bc if we use head again then the connection with the first node will be broken.
            temp->next = new;
            temp = new;
        }
        printf("\nWant to continue(0,1): ");
        scanf("%d", &choice);
    }
}

void display()
{
    llist *temp;
    temp = head;
    while (temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
}