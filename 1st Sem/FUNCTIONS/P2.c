#include<stdio.h>
void add(double , double );
void sub(double , double );
void mul(double , double );
void divid(double , double );
int main()
{
    double a,b; char x;
    printf("Enter the values: ");
    scanf("%lf%lf",&a,&b);
    printf("Enter the operation: ");
    scanf(" %c",&x);
    switch(x)
    {
        case'+': add(a,b);
                break;
        case'-': sub(a,b);
                break;
        case'*': mul(a,b);
                break;
        case'/': divid(a,b);
                break;
        default: printf("Invalid operation");
    } 
    return 0;  
}
void add(double p,double q)
{
    double c;
    c = p + q;
    printf("The sum is: %lf ",c);
}
void sub(double p,double q)
{
    double c;
    c = p - q;
    printf("The sum is: %lf ",c);
}
void mul(double p,double q)
{
    double c;
    c = p*q;
    printf("The sum is: %lf ",c);
}
void divid(double p,double q)
{
    double c;
    c = p/q;
    printf("The sum is: %lf ",c);
}