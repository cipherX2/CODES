#include <stdio.h>
#include <stdlib.h> // Defined in
int main(int argc, char const *argv[])
{
    // use of malloc
    int *ptr;
    ptr = (int *)malloc(10 * sizeof(int));
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the value %d of the arrray", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("the the value %d of the arrray is %d", i, ptr[i]);
        // scanf("%d", &ptr[i]);
    }

    return 0;
}
