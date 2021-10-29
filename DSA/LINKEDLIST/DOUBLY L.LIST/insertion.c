#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
} llist;

void create();
void display();
void insertAtBeginning();
void insertAtEnd();
void insertAtPosition();
void insertAfterPosition();
int mycount();

llist *head = NULL;
llist *tail = NULL;

void main()
{
    int choice;
    while (1)
    {
        printf("1.Create \n2.Display \n3.Insert At Beginning \n4.Insert At End \n5.Insert At Position \n6.Insert After Position \n7.Exit \n");
        printf("\nYour Choice: ");
        scanf("%d", &choice);
        switch (choice)
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
            insertAfterPosition();
            break;
        case 7:
            printf("\nSuccessfully Kicked :)");
            exit(0);
        default:
            break;
        }
    }
}

void create()
{
    llist *new;
    int choice = 1;
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
        }
        else
        {
            tail->next = new;
            new->prev = tail;
            tail = new;
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

void insertAtBeginning()
{
    llist *new;
    new = (llist *)malloc(sizeof(llist));
    printf("\nEnter data: ");
    scanf("%d", &new->data);
    new->next = head;
    new->prev = NULL;
    head->prev = new;
    head = new;
}

void insertAtEnd()
{
    llist *new;
    new = (llist *)malloc(sizeof(llist));
    printf("\nEnter data: ");
    scanf("%d", &new->data);
    new->next = NULL;
    new->prev = NULL;
    tail->next = new;
    new->prev = tail;
    tail = new;
}

int mycount()
{
    int count = 0;
    llist *temp;
    temp = head;
    while (temp->next != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void insertAtPosition()
{
    int pos, i = 1;
    llist *new, *temp = head;
    new = (llist *)malloc(sizeof(llist));
    printf("\nEnter data: ");
    scanf("%d", &new->data);
    new->next = NULL;
    new->prev = NULL;
    printf("\nEnter the position: ");
    scanf("%d", &pos);
    if (pos < 1 || pos > mycount())
    {
        printf("\nInvalid position.");
        exit(0);
    }
    else if (pos == 1)
    {
        insertAtBeginning();
    }
    else
    {
        while (i < pos - 1)
        {
            temp = temp->next;
            ++i;
        }
        new->prev = temp;
        new->next = temp->next;
        temp->next = new;
        new->next->prev = new;
    }
}

void insertAfterPosition()
{
    int pos, i = 1;
    llist *new, *temp = head;
    new = (llist *)malloc(sizeof(llist));
    printf("\nEnter data: ");
    scanf("%d", &new->data);
    new->next = NULL;
    new->prev = NULL;
    printf("\nEnter the position: ");
    scanf("%d", &pos);
    while (i < pos)
    {
        temp = temp->next;
        ++i;
    }
    new->prev = temp;
    new->next = temp->next;
    temp->next = new;
    new->next->prev = new;
}