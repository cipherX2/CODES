//Copying Source array to another array pointers
#include <stdio.h>
int main()
{
    int i, *p, *q, arr[50], tar[50], size;
    p = &arr[0];
    q = &tar[0];
    printf("Enter the size of source array: ");
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", (arr + i));
    }
    for (i = 0; i < size; i++)
    {
        printf("%d\t", *(arr + i));
    }
    printf("Enter the elements of destination array: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", tar + i);
    }
    printf("\n\nAFTER COPYING\n\n ");
    for (i = 0; i < size; i++)
    {
        *q = *p;
    }
    for (i = 0; i < size; i++)
    {
        printf("%d\t", *(p + i));
    }
}