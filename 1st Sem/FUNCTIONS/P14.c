// Factorial using Recurison
#include<stdio.h>
int fact(int );
int main()
{
    int n;
    printf("Enter the n value: ");
    scanf("%d",&n);
    printf("%d",fact(n));
    return 0;
}
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}