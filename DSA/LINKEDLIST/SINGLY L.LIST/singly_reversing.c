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
void reverse();

void main()
{
    create();
    display();
    reverse();
    display();
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

void reverse()
{
    struct node *p, *c;
    if (head != NULL)
    {
        p = head;
        c = head->next;
        head = head->next;
        p->next = NULL;
        while (head != NULL)
        {
            head = head->next;
            c->next = p;
            p = c;
            c = head;
        }
        head = p;
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
