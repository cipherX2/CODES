//Insertion of the element and to find number of elements in that array
#include<stdio.h>
int main()
{
    int arr[100],size,i,indx,element;
    printf("Enter the size : ");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element: ");
    scanf("%d",&element);
    printf("\nEnter the loaction: ");
    scanf("%d",&indx);
    for(i=size-1;i>=indx;i--)
    {
        arr[i+1]  = arr[i];
    }
    arr[indx]=element;
    for(i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}