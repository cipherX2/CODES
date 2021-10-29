#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} llist;

llist *tail = NULL;

void create();
void display();
void insertAtBeginning();
void insertAtEnd();
void insertAtPosition();
void main()
{
    int value;
    while (1)
    {
        printf("\n 1.create \n 2.display \n 3.insert At Beginning \n 4.insert At End \n 5.insert At Position \n 6.Exit \n ");
        printf("Enter the operation: ");
        scanf("%d", &value);
        switch (value)
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
            exit(0);
        default:
            break;
        }
    }
}

void create()
{
    llist *new;
    int choice;
    choice = 1;
    while (choice)
    {
        new = (llist *)malloc(sizeof(llist));
        printf("\nEnter data: ");
        scanf("%d", &new->data);
        if (tail == NULL)
        {
            tail = new;
            new->next = new;
        }
        else
        {
            new->next = tail->next;
            tail->next = new;
            tail = new;
        }
        printf("\nWant to continue(0,1): ");
        scanf("%d", &choice);
    }
}

void display()
{
    llist *temp;
    if (tail == NULL)
    {
        printf("\nEmpty List");
        exit(0);
    }
    else
    {
        temp = tail->next;
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
    if (tail == NULL)
    {
        tail = new;
        new->next = new;
    }
    else
    {
        new->next = tail->next;
        tail->next = new;
    }
}

void insertAtEnd()
{
    llist *new;
    new = (llist *)malloc(sizeof(llist));
    printf("\nEnter data: ");
    scanf("%d", &new->data);
    if (tail == NULL)
    {
        printf("Empty List");
        exit(0);
    }
    else
    {
        new->next = tail->next;
        tail->next = new;
        tail = new;
    }
}

void insertAtPosition()
{
    int i, pos, count = 0, length;
    llist *new, *temp;
    new = (llist *)malloc(sizeof(llist));
    printf("\nEnter data: ");
    scanf("%d", &new->data);
    temp = tail->next;
    do
    {
        count++;
        temp = temp->next;
    } while (temp != tail->next);
    length = count;
    printf("\nEnter the position: ");
    scanf("%d", &pos);
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
        i = 1;
        temp = tail->next;
        while (i < pos)
        {
            temp = temp->next;
            i++;
        }
        new->next = temp->next;
        temp->next = new;
    }
}
