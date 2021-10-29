#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
} list;

list *head = NULL;
list *tail = NULL;

void create();
void display();

void main()
{
    create();
    display();
}

void create()
{
    int choice;
    choice = 1;
    list *new;
    while (choice)
    {
        new = (list *)malloc(sizeof(list));
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
            head->prev = new;
            new->next = head;
            tail = new;
        }
        printf("\nWant to continue: ");
        scanf("%d", &choice);
    }
}

void display()
{
    list *temp;
    temp = head;
    if (head == NULL)
    {
        printf("\nEmpty List");
    }
    else
    {
        while (temp->next != tail->next)
        {
            printf("%d\t", temp->data);
            temp = temp->next;
        }
    }

    printf("%d", temp->data);
}