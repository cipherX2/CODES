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
void reverse();

void main()
{
    create();
    display();
    reverse();
    printf("\n Reverse is:  \n");
    display();
}

void create()
{
    int choice = 1;
    llist *new;
    while (choice == 1)
    {
        new = (llist *)malloc(sizeof(llist));
        new->next = NULL;
        new->prev = NULL;
        printf("\nEnter data: ");
        scanf("%d", &new->data);
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

void reverse()
{
    llist *current, *after = NULL;
    current = head;
    while (current != NULL)
    {
        after = current->next;
        current->next = current->prev;
        current->prev = after;
        current = after;
    }
    current = head;
    head = tail;
    tail = current;
}