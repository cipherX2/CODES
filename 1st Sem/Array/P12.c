// To delete an element from the array
#include<stdio.h>
int main()                                        // CHECK THE CODE!
{
    int arr[100],size,i,loc;
    printf("Enter the size: ");
    scanf("%d",&size);
    printf("\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("Enter the location: ");
    scanf("%d",&loc);
    for(i=size-1;i>=loc;i++)
    {
        arr[i-1]=arr[i];
    }
    for(i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 9990;
}