// Swapping Two arrays using pointers
#include <stdio.h>
int main()
{
    int a[100], b[100], size, i, j, *p, *q, temp;
    p = &a[0];
    q = &b[0];
    printf("Enter the size of array 1 & 2: ");
    scanf("%d", &size);
    printf("\nEnter the 1st array: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", p + i);
    }
    printf("\nEnter the 2nd array: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", q + i);
    }
    printf("After Swapping");
    printf("1st Array: ");
    for (i = 0; i < size; i++)
    {
        temp = *(p + i);
        *(p + i) = *(q + i);
        *(q + i) = temp;
    }
    for (i = 0; i < size; i++)
    {
        printf("%d\t", *(p + i));
    }
    printf("\n");
    printf("2nd Array: ");
    for (i = 0; i < size; i++)
    {
        printf("%d\t", *(q + i));
    }
}