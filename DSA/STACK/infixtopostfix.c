#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define maxstk 100

char stack[maxstk];
int top = -1;

void push(char);
char pop();
int precedence(char);

int main()
{
    char str[100], *c, x;
    printf("\nEnter the Infix Expression: ");
    gets(str);

    c = str;
    while (*c != '\0')
    {
        if (isalnum(*c))
        {
            printf("%c", *c);
        }
        else if (*c == '(')
        {
            push(*c);
        }
        else if (*c == ')')
        {
            while ((x = pop()) != '(')
            {
                printf("%c", x);
            }
        }
        else
        {
            while (precedence(stack[top]) >= precedence(*c))
            {
                printf("%c", pop());
            }
            push(*c);
        }
        c++;
    }
    while (top != -1)
    {
        printf("%c", pop());
    }
}
void push(char x)
{
    stack[++top] = x;
}
char pop()
{
    if (top == -1)
    {
        return -1;
    }
    else
    {
        char i;
        i = stack[top];
        top--;
        return i;
    }
}
int precedence(char x)
{
    if (x == '(')
    {
        return 0;
    }
    if (x == '+' || x == '-')
    {
        return 1;
    }
    if (x == '*' || x == '/')
    {
        return 2;
    }
    if (x == '^')
    {
        return 3;
    }
}
