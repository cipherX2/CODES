//Search an element using linear search
#include<stdio.h>
int main()
{
    int arr[100],size,i,x;
    printf("\n");
    printf("Enter the size: ");
    scanf("%d",&size);
    printf("Enter the elements please: ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n");
    for(i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    //Now to search
    printf("\nEnter the element to search:\n ");
    scanf("%d",&x);
    for(i=0;i<size;i++)
    {
            if(arr[i]==x)
            {
                printf("\n\nElement found!. Present in %d index",i);
            }
    }
    if(i==size)
    {
        printf("\nElement you searched not there.");
    }
    return 0;

}