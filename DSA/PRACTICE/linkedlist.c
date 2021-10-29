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
    int num, choice;
    llist *new, *temp;
    choice = 1;
    while (choice)
    {
        new = (llist *)malloc(sizeof(llist));
        printf("Enter data: ");
        scanf("%d", &new->data);
        // new->data = num;
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
        printf("\nDo you want to continue(0,1): ");
        scanf("%d",&choice);
    }
}

void display()
{
    llist *temp;
    temp = head;
    while (temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp = temp->next;
    }
}