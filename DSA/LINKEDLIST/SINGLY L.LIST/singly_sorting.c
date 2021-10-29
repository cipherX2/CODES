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
void my_sort();

void main()
{
    create();
    display();
    my_sort();
    printf("\nSorted List is: \n");
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

void my_sort()
{
    int temp;
    llist *after, *current;
    current = head;
    while (current != NULL)
    {
        after = current->next;
        while (after != NULL)
        {
            if (current->data > after->data)
            {
                temp = current->data;
                current->data = after->data;
                after->data = temp;
            }
            after = after->next;
        }
        current = current->next;
    }
}
