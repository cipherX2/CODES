//Replace all even numbers by 0 and odd numbers by 0
#include<stdio.h>
int main()
{
    int arr[100],size,i;
    printf("Enter the size: ");
    scanf("%d",&size);

    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<size;i++)
    {
        if(arr[i]%2==0)
        {
            arr[i]=0;
        }
        else
        {
            arr[i]=1;
        }
    }
    for(i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;

}