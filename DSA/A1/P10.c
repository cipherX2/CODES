//WAP to sort the elements of the array in ascending order using function. (bubble sort)
#include <stdio.h>
void b_sort(int[], int);
int main()
{
    int arr[100], size;
    printf("Enter the size: ");
    scanf("%d", &size);
    b_sort(arr, size);
}
void b_sort(int arr[], int size)
{
    int i, j, temp;
    printf("Enter the elements (: ");
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < size; i++)
        printf("%d\t", arr[i]);
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("\n\n\n");
    for (i = 0; i < size; i++)
        printf("%d\t", arr[i]);
}