// To check prime number using function
#include<stdio.h>
void prime(int );

int main()
{
    int x,y;
    printf("Enter the number: ");
    scanf("%d",&x);
    prime(x);   
    return 0;
}
void prime(int a)
{
    int i,count=0;
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("It is prime number");        
    }
    else
    {
        printf("Not a prime number");
    }
}