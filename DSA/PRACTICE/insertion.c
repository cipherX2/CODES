#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} llist;

llist *head = NULL;

void create();
void display();
void insertionAtFirst();
void insertionAtEnd();
void insertionAtPosition();

void main()
{
    int wish;
    printf("\n----------------------------------------------------");
    printf("\n1.Create \n2.Display \n3.Insertion at first \n4.Insertion at position \n5.Insertion At Position \n6.Exit");
    printf("Enter the operation you want : ");
    scanf("%d",&wish);

    switch (wish)
    {
    case 1:
        create();
        break;
    case 2:
        display();
        break;
    case 3:
        insertionAtFirst();
        break;
    case 4:
        insertionAtPosition();
        break;
    case 5:
        insertionAtEnd();
        break;
    case 6:
        exit(0);
    default:
        break;
    }
}

void create()
{
    int num, choice;
    llist *new, *temp;
    choice = 1;
    while (choice)
    {
        new = (llist *)malloc(sizeof(llist));
        printf("Enter data: ");
        scanf("%d", &new->data);
        // new->data = num;
        new->next = NULL;
        if (head == NULL)
        {
            head = temp = new;
        }
        else
        {
            temp->next = new;
            temp = new;
        }
        printf("\nDo you want to continue(0,1): ");
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

void insertAtFirst()
{
    llist *new;
    new = (llist*)malloc(sizeof(llist));
    printf("Enter data: ");
    scanf("%d",&new->data);
    new->next = head;
    head = new;
}

void insertAtPosition()
{
    int pos,count = 0,i=1;
    llist *new,*temp;
    new = (llist *)malloc(sizeof(llist));
    printf("Enter data: ");
    scanf("%d", &new->data);
    printf("Enter the position: ");
    scanf("%d",&pos);
    temp = head;
    while (temp->next != NULL)
    {
        ++count; 
        temp = temp->next;
    }
    temp = head;
    if (pos<=count)
    {
        while (i<pos)
        {
            temp = temp->next;
            ++i;
        }
        

        
    }
    else
    {
        printf("invalid position");
    }
}

void insertAtEnd()
{
    llist *new,*temp;
    new = (llist *)malloc(sizeof(llist));
    printf("Enter data: ");
    scanf("%d", &new->data);
    temp = head;
    while (temp->next!=NULL)
    {
        temp = temp->next;
        // ++count; For counting the number of node 
    }
    new->next = NULL;
    temp->next = new;
}
