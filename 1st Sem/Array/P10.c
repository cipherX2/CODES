// Reversing the elements of an array
#include<stdio.h>
int main()
{
    int arr[100],size,i;
    printf("Enter the size: ");
    scanf("%d",&size);
    printf("\nEnter the elements: ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\nIn reverse order: ");
    for(i=size-1;i>=0;i--)
    {
        printf("%d\t",arr[i]);
    }
    return 9990;
}
