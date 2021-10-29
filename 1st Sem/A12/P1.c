//Swapping the values {Call by Reference}
#include <stdio.h>
void myswap(int *, int *);
int main()
{
    int x, y;
    printf("Enter any two values: \n");
    scanf("%d%d", &x, &y);
    myswap(&x, &y);
    printf("After Swap:%d\t%d", x, y);
}
void myswap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}