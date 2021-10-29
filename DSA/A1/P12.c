//WAP to merge the elements of two sorted array so that resulting array is sorted
#include <stdio.h>
void merge(int[], int, int[], int);
int main()
{
    int arr[100], a, brr[100], b;
    merge(arr, a, brr, b);
}
void merge(int arr[], int a, int brr[], int b)
{
    int i, j;
    printf("\nEnter the size of array(1): ");
    scanf("%d", &a);
    printf("\nEnter the size of array(2): ");
    scanf("%d", &b);
    printf("\nEnter the elements of array(1): ");
    for (i = 0; i < a; i++)
        scanf("%d", &arr[i]);
    printf("\nEnter the elements of array(2): ");
    for (i = 0; i < b; i++)
        scanf("%d", &brr[i]);
    printf("\n\n");
    for (i = 0; i < a; i++)
        printf("%d\t", arr[i]);
    printf("\n\n");
    for (i = 0; i < b; i++)
        printf("%d\t", brr[i]);
    printf("\n\n");
    int k = 1;
    for (i = 0; i < b; i++)
    {
        for (j = a; j >= k; j--)
        {
            arr[j + 1] = arr[j];
        }
        arr[k] = brr[i];
        k = k + 2;
        a++;
    }
    printf("\n\n");
    for (i = 0; i < a + b; i++)
        printf("%d\t", arr[i]);
}