//Fibonnaci series using recursion
#include<stdio.h>
int fib(int n )
{
    if(n==1||n==2)
    {
        return 1;
    }
    else
    {
        return (fib(n-1)+fib(n-2));
    }
}    
int main()
{
    int i,n;
    printf("Enter the no. of terms u wanna see: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d\t",fib(i));
    }
    return 0;
}

