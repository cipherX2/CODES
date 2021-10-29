// 
#include<stdio.h>
int fact(int);
float sum(int);

int main()
{
    int x; float res;
    printf("Enter the nth term: ");
    scanf("%d",&x);
    res = sum(x);
    printf("The sum is : %lf",res);
    return 0;
}
int fact(int y)
{
    int f = 1;
    while(y!=0)
    {
        f = f*y;
        y--;
    }
    return f;
}
float sum(int a)
{
    int i;float ls=0.0;
    for(i=1;i<=a;i++)
    {
        ls += 1/(float)fact(i);
    }
    return ls;
}