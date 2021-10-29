#include<stdio.h>
int main()
{
    int x; int sum = 0;
    printf("Enter the number : ");
    scanf("%d",&x);

    while(x>0)
    {
        sum = sum + x%10;
        x = x/10;

    }
    int result = sum;
    printf("The Sum of the digits are: %d",result);
    return 9990;


}