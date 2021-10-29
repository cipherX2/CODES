// Wap to insert an element in an array using function.
#include <stdio.h>
void c_insert(int[], int);
int main()
{
    int arr[100], size;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    c_insert(arr, size);
}
void c_insert(int arr[], int size)
{
    int i, element, index;
    printf("Enter the elements: ");
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    printf("\nEnter the element you need to insert: ");
    scanf("%d", &element);
    printf("\nEnter the index: ");
    scanf("%d", &index);
    for (i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    for (i = 0; i < size; i++)
        printf("%d\t", arr[i]);
}