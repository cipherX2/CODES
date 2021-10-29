#include <stdio.h>
#include <string.h>

#define size 100

int stack[size], top = -1;

int main()
{
    int i;
    char str[size];
    gets(str);
    for (i = 0; str[i] != '\0'; ++i)
    {
        if (str[i] == '(' || str[i] == '{' || str[i] == '[')
            stack[++top] = str[i];
        if (str[i] == ')' && stack[top] == '(' || str[i] == ']' && stack[top] == '[' || str[i] == '}' && stack[top] == '{')
            top--;
    }
    if (top == -1)
        printf("Valid expression");
    else
        printf("Not balanced");
    return 0;
}