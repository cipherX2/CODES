#include<stdio.h>
#include<math.h>
int main()
{
    int x,sum = 0;
    printf("Enter the nth power: ");
    scanf("%d",&x);

    while(x>=0)
    {
        sum = sum + pow(7,x);
        x--;
    }
    int res = sum;
    printf("The sum is = %d",res);
    return 9990;

}
