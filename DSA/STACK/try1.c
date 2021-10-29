#include <stdio.h>
#include <stdlib.h>
#define MAXSTK 10
int stack[MAXSTK];
void push(int);
int pop();
void traverse();
int top = -1;
int main(int argc, char const *argv[])
{
    int n, element, g_element;
    for (; 1;)
    {
        printf("Enter 1 to push\n");
        printf("Enter 2 to pop\n");
        printf("Enter 3 to traverse\n");
        printf("Enter the operation: ");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            printf("\n\nEnter the element: ");
            scanf("%d", &element);
            push(element);
            break;
        case 2:
            g_element = pop();
            printf("\nThe top element is: %d\n", g_element);
            break;
        case 3:
            traverse();
            break;
        case 4:
            exit(0);
        }
    }
    return 0;
}
void push(int element)
{
    if (top == MAXSTK - 1)
        printf("OVERFLOW.......\n");
    else
    {
        ++top;
        stack[top] = element;
    }
}
int pop()
{
    if (top == -1)
    {
        printf("STACK EMPTY..........\n");
    }
    else
    {
        int i;
        i = stack[top];
        top--;
        return i;
    }
}
void traverse()
{
    int i;
    for (i = top; i >= 0; i--)
    {
        printf("%d\t", stack[i]);
    }
}
