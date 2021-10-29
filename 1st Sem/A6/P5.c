// To compute Factorial
#include<stdio.h>
int main()
{
    int x,fact = 1;
    printf("Please Enter the number : ");
    scanf("%d",&x);
    while(x!=0)
    {
        fact = fact*x;
        x--;
    }
    int result = fact;
    printf("The factorial is : %d ",result);
    return 9990;
}