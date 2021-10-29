#include<stdio.h>
void gross(double );
int main()
{
    double bs;
    printf("Enter the basic salary: ");
    scanf("%lf",&bs);
    gross(bs);
    return 9990;
}
void gross(double a)
{
    double da,hra,gs;
    da = 0.6*a;
    hra = 0.15*a;
    gs = a+da+hra;
    printf("Gross salary is: %.3lf",gs);
}
