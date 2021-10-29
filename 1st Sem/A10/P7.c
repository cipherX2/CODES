// Factorial using function
#include<stdio.h>
int res(int );
int main()
{
    int x,y;
    printf("Enter the integer: ");
    scanf("%d",&x);
    y = res(x);
    printf("%d",y);
    return 9990;
}
int res(int a)
{
    int i=a,fact=1;
    while(i>0)
    {
        fact = fact*i;
        i--;
    }
    return fact;
}