//Prime numbers in an array
#include<stdio.h>
int main()
{
    int arr[100],i,j,size,count;
     printf("Enter the size : ");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n");
    for(i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    for(i=0;i<size;i++)
    {
        count = 0;
       for(j=1;j<=arr[i];j++)
       {
           if(arr[i]%j==0)
           {
               count++;
           }
       }
       printf("\n");
       if(count==2)
       {
           printf("%d\t",arr[i]);
       }
    }
    return 0;
}