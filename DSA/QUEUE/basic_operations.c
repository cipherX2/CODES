#include <stdio.h>
#include <stdlib.h>
#define size 100

int queue[size], front = -1, rear = -1;

void insert(int x)
{
    if (rear == size - 1)
        printf("Queue is full");
    else
    {
        if (front == -1)
            front = 0;
        queue[++rear] = x;
    }
}
void delete ()
{
    if (front == -1 || front > rear)
        printf("Queue empty");
    else
    {
        printf("Deleted element: %d", queue[front]);
        for (int i = front; i <= rear; i++)
        {
            queue[i] = queue[i + 1];
        }
        --rear;
    }
}
void display()
{
    for (int i = front; i <= rear; i++)
        printf("%d\t", queue[i]);
}

int main()
{

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