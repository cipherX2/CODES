#include <stdio.h>
#include <stdlib.h>

void insert();
void delete ();
void display();
int Queue[5], size, rear = -1, front = -1;
main()
{
    int choice;

    while (1)
    {
        printf("\n1.INSERT n ");
        printf("\n2.DELETE n");
        printf("\n3.DISPLAY n");
        printf("\n4.QUIT n");
        printf("\n ENTER YOUR CHOICE");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            insert();
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
            printf("\n WRONG CHOICE");
        }
    }
}
void insert()
{
    int item;
    if (front == rear + 1 || (rear == size - 1 && front == 0))
    {
        printf("\n QUEUE OVERFLOW\n");
    }
    else
    {
        printf("\n ENTER THE VALUE YOU WANT TO INSERT\n");
        scanf("%d", &item);
        if (rear == -1)
        {
            front++;
            rear++;
            Queue[rear] = item;
        }
        else if (rear == size - 1)
        {
            rear = 0;
            Queue[rear] = item;
        }
        else
        {
            rear++;
            Queue[rear] = item;
        }
    }
}
void delete ()
{
    int front;

    if (front == -1)
    {
        printf("\n QUEUE UNDERFLOW=%d\n");
    }
    else
    {
        printf("\n DELETED VALUE = %d\n", Queue[front]);
        if (rear == front)
        {
            front = -1;
            rear = -1;
        }
        else if (front == size - 1)
        {
            front = 0;
        }
        else
        {
            front++;
        }
    }
}
void display()
{
    int index;

    if (front == -1)
    {
        printf("\n QUEUE UNDERFLOW\n");
    }
    else
    {
        printf("\n ELEMENTS OF THE QUEUE ARE:\n");
        if (front <= rear)
        {
            for (index = front; index <= rear; index++)
            {
                printf("%d\t", Queue[index]);
            }
        }
        else
        {
            for (index = front; index < 5; index++)
            {
                printf("%d\t", Queue[index]);
            }
            for (index = front; index <= rear; index++)
            {
                printf("%d\t", Queue[index]);
            }
        }
    }
}