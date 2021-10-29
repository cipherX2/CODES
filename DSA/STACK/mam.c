//program for valid parenthesis
#include <stdio.h>
#include <stdlib.h>
#define max 50
char pop(char[]);
void push(char[], char);
void check(char[]);
int top = -1;
int main()
{
    char exp[50];
    printf("Enter a infix expression ");
    scanf("%s", exp);
    check(exp);
    return 0;
}
void check(char s[])
{
    char stack[max], ch;
    int flag = 1, i;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '{' || s[i] == '[' || s[i] == '(')
            push(stack, s[i]);
        else if (s[i] == '}' || s[i] == ']' || s[i] == ')')
        {
            if (top == -1)
            {
                flag = 0;
                printf("more number of right parenthesis \n");
                break;
            }
            else
            {
                ch = pop(stack);
                if ((ch == '(' && (s[i] == ']' || s[i] == '}')) || (ch == '[' && (s[i] == ')' || s[i] == '}')) || (ch == '{' && (s[i] == ']' || s[i] == ')')))
                {
                    flag = 0;
                    printf("mismatch left & right parenthesis \n");
                    break;
                }
            }
        }
    }
    if (top != -1 && flag == 1)
    {
        flag = 0;
        printf("more number of left parenthesis \n");
    }
    if (flag == 1)
        printf("%s is a VALID EXPRESSION", s);
    else
        printf("%s is a INVALID EXPRESSION", s);
}
void push(char a[], char x)
{
    if (top == max - 1)
    {
        printf("the stack is full");
    }
    else
    {
        top++;
        a[top] = x;
    }
}
char pop(char a[])
{
    int temp;
    if (top == -1)
    {
        printf("stack underflow");
        exit(0);
    }
    else
    {
        temp = a[top];
        top--;
    }
    return temp;
}