//Stack operation using structure
#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int s[50], top;
} stk;
int ch = 1;
void push(int);
int pop();
void display();
int main()
{
    stk.top = -1;
    int x, y;
    while (ch != 0)
    {
        printf("\nPUSH\n ");
        printf("\nPOP\n");
        printf("\nDISPLAY\n");
        printf("\nQUIT\n ");
        printf("\n Enter your choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\n Enter the element to push ");
            scanf("%d", &x);
            push(x);
            break;
        case 2:
            y = pop();
            printf("\n The popped out element is : %d", y);
            break;
        case 3:
            display();
            break;
        default:
            printf("\n Invalid choice");
            exit(0);
        }
    }
    return 0;
}
void push(int p)
{
    if (stk.top == 49)
    {
        printf("Stack is overflow ");
    }
    else
    {
        stk.top = stk.top + 1;
        stk.s[stk.top] = p;
    }
}
int pop()
{
    int x;
    if (stk.top == -1)
    {
        printf("\n Stack is empty ");
    }
    else
    {
        x = stk.s[stk.top];
        stk.top--;
    }
    return x;
}
void display()
{
    int i;
    printf("\n Element of stack are : ");
    for (i = stk.top; i >= 0; i--)
    {
        printf("%d\t", stk.s[i]);
    }
}