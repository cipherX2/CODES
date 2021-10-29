// To find the sum of all elements of an array
#include<stdio.h>
int main()
{
    int arr[50],size; int i; int sum = 0;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    printf("Enter the elements : ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
        sum = sum + arr[i];
    }
    printf("The sum is : %d",sum);
    return 0;
}