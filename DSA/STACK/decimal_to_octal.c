#include <stdio.h>
#include <stdlib.h>

#define maxstk 100

int stack[maxstk];
int top = -1;

void push(int value)
{
    if (top == maxstk - 1)
    {
        printf("Stack Overflow");
    }
    else
    {
        stack[++top] = value;
    }
}
int pop()
{
    if (top == -1)
    {
        return;
    }
    else
    {
        int i;
        i = stack[top--];
        return i;
    }
}

int main()
{
    int x, rem, val;
    printf("Enter any number to create:  ");
    scanf("%d", &x);
    while (x != 0)
    {
        rem = x % 8;
        push(rem);
        x /= 8;
    }
    while (top != -1)
    {
        printf("%d", val = pop());
    }
    return 0;
}
