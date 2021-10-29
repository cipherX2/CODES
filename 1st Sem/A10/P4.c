// Calculate the power of a number
#include<stdio.h>
float poww(float , float );
int main()
{
    float a,b,z;
    printf("Enter the base: ");
    scanf("%f",&a);
    printf("Enter the exponent: ");
    scanf("%f",&b);
    z = poww(a,b);
    printf("Power is: %f ",z);
    return 0;
}
float poww(float x, float y)
{
    float p = 1.0; int i;
    if(y>0)
    {
        while(y>0)
        {
             p = p*x;
             y--;
        }
        return p;
    }
    if(y<0)
    {
        while(y!=0)
        {
            p  = p*(1.0)/x;
            y++;
        }
        return p;
    }
}
