#include <stdio.h>
#include <stdlib.h>
#define N 5

void enqueue(int);
void dequeue();
void display();
void peek();

int queue[N];
int front = -1;
int rear = -1;

void main()
{
    int choice, ele;
    while (1)
    {
        printf("\nPress 1 To Insert \nPress 2 To Delete \nPress 3 To Display \nPress 4 to Peak \nPress 5 To Exit \n");
        printf("\nEnter your choice: ");
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
    if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = x;
    }
    else if ((rear + 1) % N == front)
    {
        printf("\nQueue Overflow");
    }
    else
    {
        rear = (rear + 1) % N;
        queue[rear] = x;
    }
}

void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("\nQueue Empty");
    }
    else if (front == rear)
    {
        printf("\nThe element %d has been deleted", queue[front]);
        front = rear = -1;
    }
    else
    {
        printf("\nThe element %d has been deleted", queue[front]);
        front = (front + 1) % N;
    }
}

void display()
{
    if (front == -1 && rear == -1)
    {
        printf("\nThe queue is empty");
    }
    else
    {
        int i = front;
        while (i != rear)
        {
            printf("%d\t", queue[i]);
            i = (i + 1) % N;
        }
        printf("%d", queue[i]);
    }
}

void peek()
{
    if (front == -1 && rear == -1)
    {
        printf("\nThe queue is empty");
    }
    else
    {
        printf("The element is %d", queue[front]);
    }
}