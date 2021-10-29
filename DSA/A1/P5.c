// Wap to search an element in the array using linear search using function.
#include <stdio.h>
void lsearch(int[], int);
int main()
{
    int arr[100], size;
    printf("Enter the size of the array; ");
    scanf("%d", &size);
    lsearch(arr, size);
}
void lsearch(int arr[], int size)
{
    int i, element;
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    printf("Enter the element to search: ");
    scanf("%d", &element);
    for (i = 0; i < size; i++)
    {
        if (element == arr[i])
        {
            printf("Element found at index:  %d  ", i);
            break;
        }
    }
    if (i == size)
        printf("Not Found");
}