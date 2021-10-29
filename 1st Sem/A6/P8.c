//To check whether a number is prime or not
#include<stdio.h>
int main()
{
    int n,i,count=0;
    printf("Enter the positive integer only : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("It is a prime number");
    }
    else
    {
        printf("Not a prime number");
    }
    return 9990;
}
