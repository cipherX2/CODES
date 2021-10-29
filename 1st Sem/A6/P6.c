// TO compute sum of digits
#include<stdio.h>
int main()
{
    int x,i,y,sum = 0;
    printf("Enter the number : ");
    scanf("%d",&x);
    while(x!=0)
    {
        y = x % 10;
        sum = sum + y;
        x = x/10;
    }
    printf("The sum is : %d",sum);
    return 9990;
}