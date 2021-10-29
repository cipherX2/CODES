// Sum of all digits using recursion
#include<stdio.h>
int sum(int );
int main()
{
    int n;
    printf("Enter the n value: ");
    scanf("%d",&n);
    printf("%d",sum(n));
    return 0;
}
int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return (n%10 + sum(n/10));
    }
}