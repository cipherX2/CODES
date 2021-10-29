// WAP to update a particular value
#include<stdio.h>
int main()
{
    int arr[50],size;
    int i,y,z;
    printf("Enter the size: ");
    scanf("%d",&size);
    printf("Enter the elements : ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
        printf("%d\t ",arr[i]);
    }
    printf("\nEnter the index number and the value : ");
    scanf("%d %d",&y,&z);

    arr[y]  = z;
    for(i=0;i<size;i++)
    {
        printf(" %d\t ",arr[i]);
    }
    return 0;
}