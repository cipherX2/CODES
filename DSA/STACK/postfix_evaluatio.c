#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

#define maxstk 100

void push(int);
int pop();

int stack[maxstk], top = -1;
int main()
{
    char postfix[maxstk], element;
    int i, x, y, result;
    printf("Enter the psotfix expression: ");
    gets(postfix);
    printf("\nThe result is:  ");
    for (i = 0; postfix[i] != '\0'; ++i)
    {
        element = postfix[i];
        if (isdigit(element))
        {
            push(element - '0');
        }
        else
        {
            x = pop();
            y = pop();
            switch (element)
            {
            case '^':
                result = pow(y, x);
                break;
            case '/':
                result = y / x;
                break;
            case '*':
                result = y * x;
                break;
            case '+':
                result = y + x;
                break;
            case '-':
                result = y - x;
                break;
            }
            push(result);
        }
    }
    printf("\n%d", pop());
    return 0;
}
void push(int value)
{
    if (top == maxstk - 1)
    {
        printf("stack overflow");
    }
    else
    {
        stack[++top] = value;
    }
}
int pop()
{
    int i;
    i = stack[top--];
    return i;
}