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

void main()
{
    create();
    display();
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
        if (tail == NULL)
        {
            tail = new;
            new->next = tail;
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
    temp = tail->next;
    if (tail == NULL)
    {
        printf("\nList Empty/..");
        exit(0);
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