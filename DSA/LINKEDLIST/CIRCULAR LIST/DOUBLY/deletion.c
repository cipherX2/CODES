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

int getLength();
void create();
void display();
void deleteAtBeginning();
void deleteAtEnd();
void deleteAtPosition();

void main()
{
    int option;
    while (1)
    {
        printf("\n1.Create \n2.Display \n3.D.Beginning \n4.D.End \n5.D.Position \n6.Exit \n");
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
            deleteAtBeginning();
            break;
        case 4:
            deleteAtEnd();
            break;
        case 5:
            deleteAtPosition();
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

void deleteAtBeginning()
{
    if (head == NULL)
    {
        printf("\nList Empty");
    }
    else
    {
        llist *temp;
        temp = head;
        head = head->next;
        tail->next = head;
        head->prev = tail;
        free(temp);
    }
}

void deleteAtEnd()
{
    llist *temp;
    temp = head;
    if (head == NULL)
    {
        printf("\nList Empty");
    }
    else if (head->next == head)
    {
        temp = head;
        head = tail = NULL;
        free(temp);
    }
    else
    {
        temp = tail;
        tail = tail->prev;
        head->prev = tail;
        tail->next = head;
        free(temp);
    }
}

void deleteAtPosition()
{
    int pos, length = 0;
    printf("Enter the position: ");
    scanf("%d", &pos);
    llist *temp;
    temp = head;
    while (temp->next != tail->next)
    {
        length++;
        temp = temp->next;
    }
    if (pos < 1 || pos > length)
    {
        printf("\nEmpty List");
    }
    else if (pos == 1)
    {
        deleteAtBeginning();
    }
    else
    {
        temp = head;
        int i = 1;
        while (i < pos)
        {
            temp = temp->next;
            i++;
        }

        temp->next->prev = temp->prev;
        temp->prev->next = temp->next;
        free(temp);
    }
}