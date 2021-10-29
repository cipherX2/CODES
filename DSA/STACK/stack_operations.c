#include <stdio.h>
#include <stdlib.h>
#define size 20
void push(int);
void pop();
void traverse();
int stack[size], top = -1;
int main()
{
    int opt, ele;
    while (1)
    {
        printf("\n**MENU**\n\n");
        printf("Press 1 To Push\n Press 2 To Pop\n Press 3 To Traverse\n Press 4 To Push\n ");
        printf("\nEnter: ");
        scanf("%d", &opt);
        switch (opt)
        {
        case 1:
            printf("\nEnter the element: ");
            scanf("%d", &ele);
            push(ele);
            break;
        case 2:
            pop();
            break;
        case 3:
            traverse();
            break;
        case 4:
            exit(0);
        default:
            printf("\nInvalid choice");
        }
    }
}
void push(int element)
{
    if (top == size - 1)
        printf("\nSTACK OVERFLOW\n ");
    else
    {
        top++;
        stack[top] = element;
        printf("\nElement %d inserted\n", element);
    }
}
void pop()
{
    if (top == -1)
        printf("\nSTACK UNDERFLOW\n");
    else
    {
        printf("\nElement deleted %d", stack[top]);
        top--;
    }
}
void traverse()
{
    if (top == size - 1)
        printf("\nSTACK OVERFLOW\n ");
    else
    {
        int i;
        for (i = top; top >= 0; top--)
            printf("%d\n", stack[top]);
    }
}