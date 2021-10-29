#include <stdio.h>
#include <stdlib.h>
#define size 100
struct cqueue
{
    int cqueue[size], front, rear;
} myqueue;

void insert(int x)
{
    if ((myqueue.front == myqueue.rear + 1) % size || myqueue.rear == size - 1)
    {
        printf("Queue Overflow\n");
    }
    else if (myqueue.front == -1 && myqueue.rear == -1)
    {
        ++myqueue.front;
        ++myqueue.rear;
        myqueue.cqueue[myqueue.rear] = x;
    }
    else if (myqueue.rear == size - 1)
    {
        myqueue.rear = 0;
        myqueue.cqueue[myqueue.rear] = x;
    }
    else
        myqueue.cqueue[++myqueue.rear] = x;
}

void delete ()
{
    if (myqueue.front == -1 && myqueue.rear == -1)
        printf("queue empty\n");
    else
    {
        printf("Deleted element: %d", myqueue.cqueue[myqueue.front]);
        if (myqueue.rear == myqueue.front)
        {
            myqueue.front = -1;
            myqueue.rear = -1;
        }
        else if (myqueue.front == size - 1)
            myqueue.front = 0;
        else
        {
            ++myqueue.front;
        }
    }
}
void display()
{
    if (myqueue.front == -1)
        printf("Queue Underflow");
    else
    {
        if (myqueue.front <= myqueue.rear)
        {
            for (int i = myqueue.front; i <= myqueue.rear; i++)
            {
                printf("%d\t", myqueue.cqueue[i]);
            }
        }
        else
        {
            for (int i = myqueue.front; i < size; i++)
            {
                printf("%d\t", myqueue.cqueue[i]);
            }
            for (int i = 0; i <= myqueue.rear; i++)
            {
                printf("%d\t", myqueue.cqueue[i]);
            }
        }
    }
}
int main()
{
    myqueue.front = -1;
    myqueue.rear = -1;
    int opt, ele;
    while (1)
    {
        printf("\n**MENU**\n\n");
        printf("Press 1 To Insert\n Press 2 To Delete\n Press 3 To Display\n Press 4 To Exit\n ");
        printf("\nEnter: ");
        scanf("%d", &opt);
        switch (opt)
        {
        case 1:
            printf("\nEnter the element: ");
            scanf("%d", &ele);
            insert(ele);
            break;
        case 2:
            delete ();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("\nInvalid choice");
        }
    }
    return 0;
}