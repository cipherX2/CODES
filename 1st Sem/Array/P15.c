// Merging the elements of the sorted array
#include<stdio.h>
int main()
{
    int a[100],b[50],a_size,b_size,i,j,k=1,m=a_size-1;;
    printf("Enter the size of 1st array : ");
    scanf("%d",&a_size);

    for(i=0;i<a_size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n");
    for(i=0;i<a_size;i++)
    {
        printf("%d, ",a[i]);
    }
    printf("\nEnter the size of 2nd array: ");
    scanf("%d",&b_size);
    for(i=0;i<b_size;i++)
    {
        scanf("%d\t",&b[i]);
    }
    for(i=0;i<b_size;i++)
    {
        printf("%d, ",b[i]);
    }
    printf("\n");
    for(i=0;i<a_size;i++)
    {
        for(j=m;j>=k;j--)
        {
            a[j+1] = a[j]; 
        }
        a[k] = b[i];
        k = k+2;
        m++;
    }
    a_size = a_size + b_size;
    for(i=0;i<a_size;i++)
    {
        printf("%d\t",a[i]);
    }
    return 9990;



}
