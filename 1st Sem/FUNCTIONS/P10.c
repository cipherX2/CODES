// To compute the fibonnaci series
#include<stdio.h>
void fib(int );
int main()
{
    int x;
    printf("Enter the number the terms: ");
    scanf("%d",&x);
    fib(x);
    return 9990;
}
void fib(int x)
{
    int i;int a = 0,b = 1,result;
    for(i=1;i<=a;i++)
    {
        printf("%d\t",a);
        result = a+b;
        a = b;
        b = result;
    }
    
}   

