// 1. Insert at beginning(Singly Linked List)
// 2. Insert at end(Singly Linked List)
// 3. Insert after a given location(Singly Linked List)

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} llist;

llist *head = NULL;

void create();
void insertAtBeginning();
void insertAtPosition();
void insertAtEnd();
void display();

void main()
{
    int ans;
    while (1)
    {
        printf("\nLIST OF OPERATIONS\n");
        printf("-------------------------------------------------------\n");
        printf("1.Create List \n2.Insert At Beginning \n3.Insert At Position \n4.Insert At End \n5.Display \n6.Exit \n");
        printf("-------------------------------------------------------\n");
        printf("Enter: ");
        scanf("%d", &ans);
        switch (ans)
        {
        case 1:
            create();
            break;
        case 2:
            insertAtBeginning();
            break;
        case 3:
            insertAtPosition();
            break;
        case 4:
            insertAtEnd();
            break;
        case 5:
            display();
            break;
        case 6:
            exit(0);
        default:
            break;
        }
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
            temp->next = new;
            temp = new;
        }
        printf("\nWant to continue(0,1): ");
        scanf("%d", &choice);
    }
}

void insertAtBeginning()
{
    int num;
    llist *new;
    new = (llist *)malloc(sizeof(llist));
    printf("Enter value: ");
    scanf("%d", &num);
    new->data = num;
    new->next = head;
    head = new;
}

void insertAtEnd()
{
    int num;
    llist *new, *temp;
    new = (llist *)malloc(sizeof(llist));
    printf("Enter value: ");
    scanf("%d", &num);
    new->data = num;
    temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new;
    new->next = NULL;
}

void insertAtPosition()
{
    int num, pos, count = 0, i = 1;
    llist *new, *temp;
    new = (llist *)malloc(sizeof(llist));
    printf("\nEnter value: ");
    scanf("%d", &num);
    new->data = num;
    printf("\nEnter the position: ");
    scanf("%d", &pos);
    temp = head;
    while (temp->next != NULL)
    {
        ++count;
        temp = temp->next;
    }
    if (pos > count)
    {
        printf("\nInvalid Position ??");
    }
    else
    {
        temp = head;
        while (i < pos - 1)
        {
            temp = temp->next;
            ++i;
        }
        new->next = temp->next;
        temp->next = new;
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