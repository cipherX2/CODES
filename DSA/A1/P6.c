// Wap to search occurrences of an element in the array using function.
#include <stdio.h>
void c_search(int[], int);
int main()
{
    int arr[100], size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    c_search(arr, size);
}
void c_search(int arr[], int size)
{
    int i;
    printf("Enter the array: ");
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    int element, k = 0;
    printf("Enter the element to search: ");
    scanf("%d", &element);
    for (i = 0; i < size; i++)
    {
        if (element == arr[i])
        {
            k++;
        }
    }
    if (k == 0)
        printf("Element not found");
    else
        printf("Element found %d time/s ", k);
}