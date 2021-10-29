// Implementation of stack using linked list

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} llist;

llist *top = NULL;

void push(int);
void pop();
void peek();
void display();

void main()
{
    int value, x;
    while (1)
    {
        printf("\n1.PUSH \n2.POP \n3.PEEK \n4.DISPLAY \n5.EXIT \n");
        printf("\nEnter the operation: ");
        scanf("%d", &value);
        switch (value)
        {
        case 1:
            printf("\nEnter the value: ");
            scanf("%d", &x);
            push(x);
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            exit(0);
        default:
            break;
        }
    }
}

void push(int x)
{
    llist *new;
    new = (llist *)malloc(sizeof(llist));
    new->data = x;
    new->next = top;
    top = new;
}

void pop()
{
    llist *temp;
    if (top == NULL)
    {
        printf("Empty Stack");
        exit(0);
    }
    else
    {
        temp = top;
        printf("\nDeleted Item is %d", top->data);
        top = top->next;
        free(temp);
    }
}

void peek()
{
    if (top == NULL)
    {
        printf("Empty Stack");
        exit(0);
    }
    else
    {
        printf("Top element is %d", top->data);
    }
}

void display()
{
    llist *temp;

    if (top == NULL)
    {
        printf("Empty Stack");
        exit(0);
    }
    else
    {
        temp = top;
        while (temp != NULL)
        {
            printf("%d\t", temp->data);
            temp = temp->next;
        }
    }
}