//	Wap to update each element of the array by multiplying 10 using function.
#include <stdio.h>
void mymultiply(int[], int);
int main()
{
    int arr[100], size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    mymultiply(arr, size);
}
void mymultiply(int arr[], int size)
{
    int i;
    printf("Enter the elements: ");
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < size; i++)
        printf("%d\t", 10 * arr[i]);
}