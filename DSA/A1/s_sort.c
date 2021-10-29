//WAP to sort the elements of the array in ascending order using function. (selection sort)
#include <stdio.h>
void s_sort(int[], int);
int main()
{
    int arr[100], size;
    printf("Enter the size:  ");
    scanf("%d", &size);
    s_sort(arr, size);
}
void s_sort(int arr[], int size)
{
    int i, j, min;
    printf("Enter the elements of the array : ");
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < size; i++)
        printf("%d\t", arr[i]);
    printf("\n\nSORTING\n\n");
    int temp;
    for (i = 0; i < size - 1; i++)
    {
        min = i;
        for (j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    for (i = 0; i < size; i++)
        printf("%d\t", arr[i]);
}