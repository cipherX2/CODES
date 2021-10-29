// To calculate the sum of n natural numbers
#include<stdio.h>
#include<math.h>
int main()
{
    int x,i,sum = 0;
    printf("Enter the nth term : ");
    scanf("%d",&x);

    for(i=0;i<=x;i++)
    {
        sum = sum + pow(i,2);
    }
    int res = sum;
    printf("\n\n The sum of squares is :%d ",res);
    return 9990;








}