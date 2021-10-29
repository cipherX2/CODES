// Prime numbers within a given range
#include<stdio.h>
int main()
{
    int j,s,e,i,count;
    printf("Enter the start : ");
    scanf("%d",&s);
    printf("Enter the end : ");
    scanf("%d",&e);

    for(i=s;i<=e;i++)
    { 
        count=0;   
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
     if(count==2)
     {
     printf("%d, ",i);
     }
        
       
    }
}