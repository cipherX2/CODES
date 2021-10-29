// To compute Fibonacci series to nth term
#include<stdio.h>
int main()
{
    int a=0,b=1,n,result;
    printf("Enter the nth term : ");
    scanf("%d",&n);
    while(n!=0)
    {
        printf("%d, ",a);
        result = a + b;
        a = b;
        b = result;
        n--;
    }




}