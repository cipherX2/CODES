// Fibonacci using function
#include<stdio.h>
void fib(int x);

int main()
{
    int x;
    printf("Enter the nth term: ");
    scanf("%d",&x);
    fib(x);
    return 0;
}
void fib(int a)
{
    int i,p=0,q=1,res;
    for(i=1;i<=a;i++)
    {
        printf("%d\t",p);
        res = p + q;
        p = q;
        q = res;
    }
}
