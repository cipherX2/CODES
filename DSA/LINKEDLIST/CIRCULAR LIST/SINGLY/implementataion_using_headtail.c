// Implementation using head and tail

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}llist;

llist *head = NULL;
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
        if (head == NULL)
        {
            head = tail = new;
            // tail->next = head;
        }
        else
        {
            tail->next = new;
            tail = new;
            // tail->next = head;
        }
        tail->next = head;

        // printf("%d",tail->next->data);

        printf("Want to continue: ");
        scanf("%d", &choice);
    }
}

void display()
{
    llist *temp;
    temp = head;
    do
    {
        printf("%d\t",temp->data);
        temp = temp->next;
    } while (temp != head);
}

