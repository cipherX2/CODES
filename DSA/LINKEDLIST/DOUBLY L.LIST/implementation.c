#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
} llist;

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
    int choice = 1;
    llist *new, *temp;
    while (choice == 1)
    {
        new = (llist *)malloc(sizeof(llist));
        printf("\nEnter Data: ");
        scanf("%d", &new->data);
        new->next = NULL;
        new->prev = NULL;
        if (head == NULL)
        {
            head = temp = new;
        }
        else
        {
            temp->next = new;
            new->prev = temp;
            temp = new;
        }
        printf("\nWant to continue: ");
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