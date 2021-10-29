// Implementation Using head 


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

void main()
{
    create();
    display();
}

void create()
{
    int choice = 1;
    llist *new, *temp;
    while (choice)
    {
        new = (llist *)malloc(sizeof(llist));
        new->next = NULL;
        printf("\nEnter data: ");
        scanf("%d", &new->data);
        if (head == NULL)
        {
            head = temp = new;
        }
        else
        {
            temp->next = new;
            temp = new;
        }
        temp->next = head;
        printf("\nWant to continue:  ");
        scanf("%d", &choice);
    }
}

void display()
{
    llist *temp;
    temp = head;
    while (temp->next != head)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
    printf("%d", temp->data);
}