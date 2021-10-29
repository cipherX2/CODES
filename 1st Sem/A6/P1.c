#include<stdio.h>
int main()
{
    int x,sum = 0;
    printf("Enter the nth term: ");
    scanf("%d",&x);
    while(x>0)
    {
        sum = sum + x;
        x--;
    }
    int res = sum;
    printf("The sum of nth numbers are: %d",res);
    return 9990;





}