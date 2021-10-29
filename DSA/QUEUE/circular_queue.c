#include "stdio.h"
#include "stdlib.h"
#define size 5

int queue[size], front = -1, rear = -1;

void enqueue(int);
void dequeue();
void display();
void peek();

int main(int argc, char const *argv[])
{
    int x, element;
    while (1)
    {
        printf("\n1.INSERT 2.DELETE 3.DISPLAY 4.PEEK 5.EXIT\n");
        scanf("%d", &x);
        switch (x)
        {
        case 1:
            printf("\nEnter the element: ");
            scanf("%d", &element);
            enqueue(element);
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
            printf("Invalid choice\n");
        }
    }
    return 0;
}
void enqueue(int x)
{
    if (front == -1 && rear == -1)
    {
        front++;
        rear++;
        queue[rear] = x;
    }
    else if ((rear = rear + 1) % size == front)
    {
        printf("\nQueue Full\n");
    }
    else
    {
        rear = (rear + 1) % size;
        queue[rear] = x;
    }
}
void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("\nQueue Empty");
    }
    else if (rear == front)
    {
        printf("Deleted Element is: %d", queue[front]);
        front = -1;
        rear = -1;
    }
    else
    {
        printf("Deleted Element is %d", queue[front]);
        front = (front + 1) % size;
    }
}
void display()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue Empty");
    }
    else
    {
        if (front <= rear)
        {
            for (int i = front; i <= rear; i++)
            {
                printf("%d", queue[front]);
            }
        }
        else
        {
            for (int i = front; i < size; i++)
            {
                printf("%d\t", queue[front]);
            }
            for (int i = 0; i <= rear; i++)
            {
                printf("%d\t", queue[i]);
            }
        }
    }
}
void peek()
{
    printf("\nPeeked at: %d", queue[front]);
}
