// Multiply the contents of two array and store in a single array
#include<stdio.h>
int main()
{
    int arr[100],a[100],res[100],i,j,k,size1,mul =1;
    printf("Enter the size: ");
    scanf("%d",&size1);
    printf("The first array: ");
    for(i=0;i<size1;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size1;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    printf("The second array: ");
    for(j=0;j<size1;j++)
    {
        scanf("%d",&a[j]);
    }
    for(j=0;j<size1;j++)
    {
        printf("%d\t",a[j]);
    }
    printf("\n");
    printf("The Resultant array is: ");
    for(i=0,j=0,k=0;i<size1 && j<size1 && k<size1;i++,j++,k++)
    {
        res[k] = mul*arr[i]*a[j];
        printf("%d\t",res[k]);
    }
    printf("\n");
}