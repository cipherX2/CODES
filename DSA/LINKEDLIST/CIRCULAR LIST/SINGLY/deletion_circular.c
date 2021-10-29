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
void deleteAtBeginning();
void deleteAtEnd();
void deleteAtPosition();
void main()
{
    int value;
    while (1)
    {
        printf("\n 1.create \n 2.display \n 3.delete At Beginning \n 4.delete At End \n 5.delete At Position \n 6.Exit \n ");
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
            deleteAtBeginning();
            break;
        case 4:
            deleteAtEnd();
            break;
        case 5:
            deleteAtPosition();
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

void deleteAtBeginning()
{
    if (tail == NULL)
    {
        printf("\nList Empty");
    }
    else
    {
        llist *temp;
        temp = tail->next;
        tail->next = temp->next;
        free(temp);
    }
}

void deleteAtEnd()
{
    if (tail == NULL)
    {
        printf("\nList Empty");
    }
    else
    {
        llist *current, *before;
        current = tail->next;
        while (current->next != tail->next)
        {
            before = current;
            current = current->next;
        }
        before->next = tail->next;
        tail = before;
        free(current);
    }
}

void deleteAtPosition()
{
    int pos,count=0;
    printf("Enter the position: ");
    scanf("%d", &pos);
    llist *size = tail->next;
    while (size->next!=tail->next)
    {
        count++;
        size = size->next;
    }
    if (pos < 1 || pos > count)
    {
        printf("\nInvalid Position");
    }
    else if (pos == 1)
    {
        deleteAtBeginning();
    }
    else
    {
        int i = 1;
        llist *temp,*before;
        temp = tail->next;
        while (i < pos)
        {
            before = temp;
            temp = temp->next;
            i++;
        }
        before->next = temp->next;
        free(temp);
    }
}
