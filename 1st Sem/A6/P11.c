#include<stdio.h>
int main()
{
    int i,y,sum,num;
    for(i=1;i<=10000;i++)
    {
        sum=0;
        num=i;
        while(num>0)
        {
            y = num%10;
            sum = sum + y;
            num = num/10;
        }
        num=i;
        if(i%sum==0)
        {
            printf("%d, ",i);
        }

    }





}