//To find the power of the given integer
#include<stdio.h>
void power(double , int );
int main()
{
    double x; int y;
    printf("Enter the base: ");
    scanf("%lf",&x);
    printf("Enter the exponent: ");
    scanf("%d",&y);
    power(x,y);
    return 0;
}
void power(double a,int b)
{
    
    double poww=1.0;
    if(b==0)
    {
        printf("The power is 1");
    }
    if(b>0)
    {
        while(b!=0)
        {
            poww = poww*a; 
            b--;
        }
        printf("The Power is : %lf",poww);
    }
    if(b<0)
    {
        while(b!=0)
        {
           poww = poww*(1.0/a);
            b++;
        }
        printf("The Power is : %lf",poww);
    }
}        