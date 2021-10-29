#include <stdio.h>

#define size 100
struct queue
{
    int queue[size], rear, front;
} myqueue;
void insert(int x)
{
    if (myqueue.rear == size - 1)
        printf("Queue is full");
    else
    {
        if (myqueue.front == -1)
            myqueue.front = 0;
        myqueue.queue[++myqueue.rear] = x;
    }
}
void delete ()
{
    if (myqueue.front == -1 || myqueue.front > myqueue.rear)
        printf("Queue empty");
    else
    {
        printf("Deleted element: %d", myqueue.queue[myqueue.front]);
        for (int i = myqueue.front; i <= myqueue.rear; i++)
        {
            myqueue.queue[i] = myqueue.queue[i + 1];
        }
        --myqueue.rear;
    }
}
void display()
{
    for (int i = myqueue.front; i <= myqueue.rear; i++)
        printf("%d\t", myqueue.queue[i]);
}
int main()
{
    myqueue.rear = -1;
    myqueue.front = -1;
    int x, y, ch;
    while (1)
    {
        printf("\nINSERT\n ");
        printf("\nDELETE\n");
        printf("\nDISPLAY\n");
        printf("\nQUIT\n ");
        printf("\n Enter your choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\n Enter the element to push ");
            scanf("%d", &x);
            insert(x);
            break;
        case 2:
            delete ();
            break;
        case 3:
            display();
            break;
        default:
            printf("\n Invalid choice");
            exit(0);
        }
    }
    return 0;
}