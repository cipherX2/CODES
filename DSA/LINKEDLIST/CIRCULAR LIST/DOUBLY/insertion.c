#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
} llist;

llist *head = NULL;
llist *tail = NULL;

void create();
void display();
void insertAtBeginning();
void insertAtEnd();
void insertAtPosition();

void main()
{
    int option;
    while (1)
    {
        printf("\n1.Create \n2.Display \n3.I.Beginning \n4.I.End \n5.I.Position \n6.Exit \n");
        printf("\nEnter the option: ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            insertAtBeginning();
            break;
        case 4:
            insertAtEnd();
            break;
        case 5:
            insertAtPosition();
            break;
        case 6:
            printf("\n\nSuccessfully Kicked\n\n");
            exit(0);
        default:
            break;
        }
    }
}

void create()
{
    int choice = 1;
    llist *new;
    while (choice)
    {
        new = (llist *)malloc(sizeof(llist));
        printf("\nEnter data: ");
        scanf("%d", &new->data);
        new->next = NULL;
        new->prev = NULL;
        if (head == NULL)
        {
            head = tail = new;
            head->next = new;
            head->prev = new;
        }
        else
        {
            tail->next = new;
            new->prev = tail;
            new->next = head;
            head->prev = new;
            tail = new;
        }
        printf("\nDo you want to continue(0,1): ");
        scanf("%d", &choice);
    }
}

void display()
{
    llist *temp;
    temp = head;
    if (head == NULL)
    {
        printf("\nList Empty");
    }
    else
    {
        do
        {
            printf("%d\t", temp->data);
            temp = temp->next;
        } while (temp != tail->next);
    }
}

void insertAtBeginning()
{
    llist *new;
    new = (llist *)malloc(sizeof(llist));
    printf("\nEnter data: ");
    scanf("%d", &new->data);
    new->next = NULL;
    new->prev = NULL;
    if (head == NULL)
    {
        head = tail = new;
        head->next = new;
        head->prev = new;
    }
    else
    {
        new->next = head;
        head->prev = new;
        new->prev = tail;
        tail->next = new;
        head = new;
    }
}

void insertAtEnd()
{
    llist *new;
    new = (llist *)malloc(sizeof(llist));
    printf("\nEnter data: ");
    scanf("%d", &new->data);
    new->next = NULL;
    new->prev = NULL;
    if (head == NULL)
    {
        printf("\nList Empty");
    }
    else
    {
        new->prev = tail;
        tail->next = new;
        new->next = head;
        head->prev = new;
        tail = new;
    }
}

void insertAtPosition()
{
    int pos, count = 0;
    llist *temp;
    temp = head;
    printf("\nEnter position: ");
    scanf("%d", &pos);
    while (temp->next != tail->next)
    {
        count++;
        temp = temp->next;
    }
    if (pos < 1 || pos > count)
    {
        printf("\nInvalid Position");
    }
    else if (pos == 1)
    {
        insertAtBeginning();
    }
    else
    {
        int i = 1;
        llist *new;
        new = (llist *)malloc(sizeof(llist));
        printf("\nEnter data: ");
        scanf("%d", &new->data);
        new->next = NULL;
        new->prev = NULL;
        temp = head;
        while (i < pos - 1)
        {
            temp = temp->next;
            i++;
        }
        new->prev = temp;
        new->next = temp->next;
        temp->next->prev = new;
        temp->next = new;
    }
}