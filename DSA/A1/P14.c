#include <stdio.h>
int b_search(int[], int);
int main()
{
    int arr[100], size, k;
    printf("Emter the array size: ");
    scanf("%d", &size);
    k = b_search(arr, size);
    if (k == -1)
        printf("Element not found");
    else
        printf("Element found at: %d", k);
}
int b_search(int arr[], int size)
{
    int i, element;
    printf("Enter the elements (: ");
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < size; i++)
        printf("%d\t", arr[i]);
    printf("\nEnter the element to search: ");
    scanf("%d", &element);
    int low, upr, mid;
    low = 0;
    upr = size - 1;
    while (low <= upr)
    {
        mid = (low + upr) / 2;
        if (element < arr[mid])
        {
            upr = mid - 1;
        }
        else if (element > arr[mid])
        {
            low = mid + 1;
        }
        else if (element == arr[mid])
        {
            return mid;
        }
    }
    if (low > upr)
    {
        return -1;
    }
}