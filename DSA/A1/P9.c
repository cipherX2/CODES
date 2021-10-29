// WAP to merge the elements of two arrays using function.consider following prototype void merge(int[], int, int[], int, int[]);

#include <stdio.h>
void merge(int[], int, int[], int, int[]);
int main()
{
    int arr[100], a, brr[100], b, crr[100];
    printf("Enter the size of the array(1): ");
    scanf("%d", &a);
    printf("Enter the size of array(2): ");
    scanf("%d", &b);
    merge(arr, a, brr, b, crr);
}
void merge(int arr[], int a, int brr[], int b, int crr[])
{
    int i, c;
    c = a + b;
    printf("Enter the first array: ");
    for (i = 0; i < a; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < a; i++)
        printf("%d\t", arr[i]);
    printf("Enter the second array: ");
    for (i = 0; i < b; i++)
        scanf("%d", &brr[i]);
    for (i = 0; i < b; i++)
        printf("%d\t", brr[i]);
    for (i = 0; i < b; i++)
    {
        arr[a + i] = brr[i];
    }
    printf("\nThe resultant array(3) is: ");
    for (i = 0; i < a + b; i++)
    {
        crr[i] = arr[i];
        printf("%d\t", crr[i]);
    }
    /*for (i = 0; crr[i]; i++)
    {
        printf("%d\t", crr[i]);
    }*/
}