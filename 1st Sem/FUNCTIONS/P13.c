// Find the sum of n first integers
#include<stdio.h>
int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return (n + sum(n-1));
    }
}
int main()
{
    int n;
    printf("Enter the term to compute: ");
    scanf("%d",&n);
    printf("%d",sum(n));
    return 0;
}