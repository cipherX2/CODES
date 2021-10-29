// Swap two integer values
#include <stdio.h>
void myswap(int *, int *);
int main()
{
    int x, y, *p, *q;
    p = &x;
    q = &y;
    printf("Enter the values of two integers: ");
    scanf("%d%d", &x, &y);
    myswap(&x, &y);
    printf("After Swap: %d %d", x, y);
}
void myswap(int *p, int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}