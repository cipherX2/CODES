// Adding two numbers using pointers
#include<stdio.h>
int mysum(int *,int *);
int mysub(int *,int *);
int mymul(int *,int *);
int mydiv(int *,int *);
int main()
{
    int x,y,z,k,l,m;
    printf("Enter any two integers: ");
    scanf("%d%d",&x,&y);
    z = mysum(&x,&y);
    k = mysub(&x,&y);
    l = mymul(&x,&y);
    m = mydiv(&x,&y);
    printf("%d\n",z);
    printf("%d\n",k);
    printf("%d\n",l);
    printf("%d\n",m);
}
int mysum(int *a,int *b)
{
    int z;
    z = *a + *b;
    return z;
}
int mysub(int *a,int *b)
{
    int z;
    z = *a - *b;
    return z;
}
int mymul(int *a,int *b)
{
    int z;
    z = *a * *b;
    return z;
}
int mydiv(int *a,int *b)
{
    int z;
    z = *a / *b;
    return z;
}
