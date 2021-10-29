//insertion sort
#include <stdio.h>
void i_sort(int[], int);
int main()
{
    int arr[100], size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    i_sort(arr, size);
}
void i_sort(int arr[], int size)
{
    int i, j, temp;
    printf("\n\nSCANNING\n\n");
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    for (i = 1; i < size; i++)
    {
        temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
    printf("\nSorting.......\n\n");
    for (i = 0; i < size; i++)
        printf("%d\t", arr[i]);
}