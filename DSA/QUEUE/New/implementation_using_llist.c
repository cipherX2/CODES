#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} llist;

void enqueue();
void dequeue();
void display();
void peek();

llist *front = NULL;
llist *rear = NULL;

void main()
{
    int choice;
    while (1)
    {
        printf("\nPress 1 To Insert \nPress 2 To Delete \nPress 3 To Display \nPress 4 to Peak \nPress 5 To Exit \n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            peek();
            break;
        case 5:
            exit(0);
        default:
            break;
        }
    }
}

void enqueue()
{
    llist *new;
    new = (llist *)malloc(sizeof(llist));
    printf("\nEnter data: ");
    scanf("%d", &new->data);
    new->next = NULL;
    if (front == NULL && rear == NULL)
    {
        front = rear = new;
    }
    else
    {
        rear->next = new;
        rear = rear->next;
    }
}

void dequeue()
{
    llist *temp;
    temp = front;
    if (front == NULL && rear == NULL)
    {
        printf("\nEmpty List");
    }
    else
    {
        front = front->next;
        free(temp);
    }
}

void display()
{
    if (front == NULL && rear == NULL)
    {
        printf("\nempty queue");
    }
    else
    {
        llist *temp;
        temp = front;
        do
        {
            printf("%d\t", temp->data);
            temp = temp->next;
        } while (temp != NULL);
    }
}

void peek()
{
    if (front == NULL && rear == NULL)
    {
        printf("\nempty queue");
    }
    else
    {
        printf("%d", front->data);
    }
}