#include <stdio.h>
#include <stdlib.h>

#define maxstk 100

int stack[maxstk], top = -1;

void push(char);
char pop();
int main()
{
    int i;
    char str[maxstk];
    printf("Input String: ");
    gets(str);

    //Now reversing
    //1.Pushing into stack
    for (i = 0; str[i] != '\0'; i++)
    {
        push(str[i]);
    }
    //2.Popping from stack and inserting in the string
    for (i = 0; str[i] != '0'; i++)
    {
        str[i] = pop();
    }
    printf("The reverse of the string is: %s", str);
    return 0;
}
void push(char x)
{
    if (stack[top] == maxstk - 1)
    {
        printf("Stack overflow");
    }
    else
    {
        top++;
        stack[top] = x;
    }
}
char pop()
{
    if (stack[top] == -1)
    {
        return 0;
    }
    else
    {
        char value;
        value = stack[top];
        top--;
        return value;
    }
}