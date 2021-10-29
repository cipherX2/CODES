#include <stdio.h>
#include <stdlib.h>

#define N 100

int queue[N];
int front = -1;
int rear = -1;

void enqueue(int);
void dequeue();
void display();
void peek();

void main()
{
    int choice, ele;
    while (1)
    {
        printf("\nPress 1 To Insert \nPress 2 To Delete \nPress 3 To Display \nPress 4 to Peak \nPress 5 To Exit \n");
        printf("\nEnter choice:  ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter the element: ");
            scanf("%d", &ele);
            enqueue(ele);
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

void enqueue(int x)
{
    if (rear == N - 1)
    {
        printf("Queue Overflow");
    }
    else if (front == -1 && rear == -1)
    {
        front = 0;
        rear = 0;
        queue[rear] = x;
    }
    else
    {
        queue[++rear] = x;
    }
}

void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("\nQueue Overflow");
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        printf("\nDeleted element is : %d", queue[front]);
        ++front;
    }
}

void display()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue Underflow");
    }
    else
    {
        for (int i = front; i < rear + 1; i++)
        {
            printf("%d\t", queue[i]);
        }
    }
}

void peek()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue Underflow");
    }
    else
    {
        printf("%d", queue[front]);
    }
}