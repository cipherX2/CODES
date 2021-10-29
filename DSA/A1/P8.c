//WAP to delete an element from array where element to be deleted is given using function.
#include <stdio.h>
void c_delete(int[], int);
int main()
{
    int arr[100], size;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    c_delete(arr, size);
}
void c_delete(int arr[], int size)
{
    int i, index;
    printf("Enter the elements: ");
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < size; i++)
        printf("%d\t", arr[i]);
    printf("Enter the location: ");
    scanf("%d", &index);

    // :)
    for (i = index; i < size; i++)
        arr[i] = arr[i + 1];

    for (i = 0; i < size - 1; i++)
        printf("%d\t", arr[i]);
}