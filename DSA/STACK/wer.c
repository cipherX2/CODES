#include <stdio.h>
#include <stdlib.h>

void push(int);
int pop();
void display();

int top = -1, stack[10];

int main()
{
    int ch, i, x;
    while (ch != 0)
    {
        printf("\n 1.Push \n 2.Pop \n 3.Display \n 4.Exit");
        printf("\n Enter your choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\n Enter the element to push : ");
            scanf("%d", &i);
            push(i);
            break;
        case 2:
            x = pop();
            printf("\n Enter the element to push : ");
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("\n Wrong Choice");
        }
    }
}

void push(int v)
{
    if (top == 9)
    {
        printf("\n Stack is overflow");
    }
    else
    {
        top = top + 1;
        stack[top] = v;
    }
}

int pop()
{
    if (top == -1)
    {
        printf("\n Stack is empty");
    }
    else
    {
        int x = stack[top];
        top--;
    }
}

void display()
{
    printf("\n Elements of Stack are \n");
    for (int i = top; i >= 0; --i)
    {
        printf("%d\n", stack[i]);
    }
}