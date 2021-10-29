//Infix To Postfix conversion
#include <stdio.h>
#define MAX 100

int top = -1;
char stack[MAX];
void push(char ch);
char pop();
int pcheck(char);
int main()
{
    char A[MAX], B[MAX];
    int i, j = -1, t;
    printf("\n input Expression : \t");
    gets(A);

    for (i = 0; A[i] != '\0'; i++)
    {
        switch (A[i])
        {
        case '(':
            push('(');
            break;
        case ')':
            while (stack[top] != '(')
            {
                B[++j] = pop();
            }
            pop();
            break;
        case '^':
            push('^');
            break;
        case '/':
            if (stack[top] == -1)
                push('/');
            else if (pcheck(stack[top]) >= 2 || top >= 0)
            {
                while (stack[top] != '(')
                {
                    B[++j] = pop();
                }
            }
            else
                push('/');
            break;
        case '*':
            if (stack[top] == -1)
                push('*');
            else if (pcheck(stack[top]) >= 2 || top >= 0)
            {
                while (stack[top] != '(')
                {
                    B[++j] = pop();
                }
            }
            else
                push('*');
            break;
        case '+':
            if (stack[top] == -1)
                push('+');
            else if (pcheck(stack[top]) >= 1)
            {
                while (stack[top] != '(' || top >= 0)
                {
                    B[++j] = pop();
                }
            }
            else
                push('+');
            break;
        case '-':
            if (stack[top] == -1)
                push('-');
            else if (pcheck(stack[top]) >= 1 || top >= 0)
            {
                while (stack[top] != '(')
                {
                    B[++j] = pop();
                }
            }
            else
                push('-');
            break;
        default:
            j = j + 1;
            B[j] = A[i];
            printf("\n %s", B);
            break;
        }
    }
    while (top >= 0)
    {
        j = j + 1;
        B[j] = pop();
    }
    printf("\n Postfix :\t %s", B);

    return 0;
}
void push(char e)
{
    int i;
    if (top == MAX - 1)
    {
        printf("\n stack is full");
    }
    else
    {
        stack[++top] = e;
    }
}
char pop()
{
    int i;
    char e;
    if (top == -1)
    {
        for (i = top; i >= 0; i--)
        {
            printf("%c\t", stack[i]);
        }
        printf("\n stack is empty");
    }
    else
    {
        e = stack[top];
        top--;
    }
    return e;
}
int pcheck(char a)
{
    if (a == '^')
        return 3;
    else if (a == '/' || a == '*')
        return 2;
    else if (a == '-' || a == '+')
        return 1;
    return 0;
}
