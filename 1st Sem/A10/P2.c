// Calculator using functions
#include<stdio.h>
float add(float,float);
int sub(int,int);
int multi(int,int);
int divid(int,int);

int main()
{
   char opo;
   float a,b,c;
    printf("\n Enter an operator (+, -, *,/): \t");
    scanf("%c", &opo);
    printf("\n Enter two operands: ");
    scanf("%f %f", &a, &b);

    switch (opo)
    {
    case '+':
        c=add(a,b);
        printf("%f + %f = %f",a,b,c);
        break;
    case '-':
        c=sub(a,b);
        printf("%f - %f = %f",a,b,c);
        break;
    case '*':
        c=multi(a,b);
        printf("%f * %f = %f",a,b,c);
        break;
    case '/':
        c=divid(a,b);
        printf("%f / %f = %f",a,b,c);
        break;

    default:
        printf("Error! operator doesn't match");
    }
    return 0;
}

float add(float a,float b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int multi(int a,int b)
{
    return a*b;
}
int divid(int a,int b)
{
    return a/b;
}