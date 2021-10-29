//
#include<stdio.h>
int main()
{
    int arr[100],i,size,sum1 = 0,sum2 = 0;
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
    printf("\n");
    printf("Even numbers are: ");
    for(i=0;i<size;i++)
    {
        if(arr[i]%2==0 && arr[i]>0)
        {
            printf("%d\t",arr[i]);
        }
    }
    printf("\n");
    printf("The odd numbers are : ");
    for(i=0;i<size;i++)
    {
        if(arr[i]%2!=0 && arr[i]>0){
        printf("%d\t",arr[i]);}
    }
    printf("\n");
    printf("The positive numbers are : ");
    for(i=0;i<size;i++)
    {
        if(arr[i]>0)
        {
            printf("%d\t",arr[i]);
        }
    }
    printf("\n");
    printf("The odd numbers are : ");
    for(i=0;i<size;i++)
    {
        if(arr[i]<0)
        {
            printf("%d",arr[i]);
        }
    }
    printf("\n");
    printf("The sum of even numbers : ");
    for(i=0;i<size;i++)
    {
        if(arr[i]%2==0 && arr[i]>0)
        {
            sum1 = sum1 + arr[i];
            printf("%d",sum1);
        }
    }
    printf("\n");
    printf("The sumo of odd numbers are : ");
    for(i=0;i<size;i++)
    {
        if(arr[i]%2!=0 && arr[i]>0)
        {
            sum2 = sum2 + arr[i];
            printf("%d",sum2);
        }
    }
    return 0;
}