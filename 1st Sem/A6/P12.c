// NUmbers inrange of 1000 divisible by 18 and 32
#include<stdio.h>
int main()
{
    int i,num;
    for(i=1;i<10000;i++)
    {
        num = i;
        if(num%18==0 && num%32==0)
        {
            printf("%d, ",i);
        }
    }
    return 9990;






}