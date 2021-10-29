// SIMPLE CALCULATOR USING SWITCH CASE
#include<stdio.h>
int main()
{
    
        float a, b, r;
        char c;
        printf("\nEnter the operation using 2 numbers (and +, -, *, /, % ): ");
        scanf("%f  %c %f", &a, &c, &b);
        switch (c)
        {
                case '+': r = a + b;
                        break;
                case '-': r = a - b;
                        break;
                case '*': r = a * b;
                        break;
                case '/': r = a / b;
                        break;
                case '%': r = (int)a % (int)b;
                        break;
                default: printf("\nInvalid operation!");
        }
        printf("\nResult = %.2f\n\n\n", r);
        return 0;
}