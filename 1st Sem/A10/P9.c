//To compute the taylor series
#include <stdio.h>
#include <math.h>
int fact(int);
double sum(float, int);
int main()
{
    float n;
    int m;
    double y;
    printf("Enter the exponent: ");
    scanf("%d", &n);
    printf("Enter the number of terms: ");
    scanf("%f", &m);
    y = sum(n, m);
    printf("Result is: %lf", y);
    return 0;
}
int fact(int a)
{
    int f = 1;
    while (a != 0)
    {
        f = f * a;
        a--;
    }
    return f;
}
double sum(float p, int q)
{
    int i, z = 1;
    for (i = 1; i <= q; i++)
    {
        z = z + pow(p, i) / fact(i);
    }
    return z;
}