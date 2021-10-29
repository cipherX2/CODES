#include<stdio.h>
void series(int );
int fact(int );
int main()
{
    int x;
    printf("Enter the no. of terms: ");
    scanf("%d",&x); 
    series(x);
    return 9990;
}
void series(int a)
{
    int i; double res=0.0;
    for(i=1;i<=a;i++)
    {
        res = res + (1.0/fact(i));
    }
    printf("The sum of the series: %lf",res);
}
int fact(int i)
{
    int fact=1;
    while(i!=0)
    {
        fact = fact*i;
        i--;
    }
    return fact;
}




