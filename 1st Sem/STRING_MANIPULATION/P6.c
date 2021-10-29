// String comparison using use rdefined function
#include<stdio.h>
#include<string.h>
int mystrcmp(char x[],char y[])
{
    int l1,l2;
    l1 = strlen(x);
    l2 = strlen(y);
    if(l1==l2)
        return 0;
    if(l1<l2)
        return -1;
    if(l1>l2)
        return 1;
}
int main()
{
    char x[100],y[100];
    int val;
    printf("Enter the 1st String: ");
    gets(x);
    printf("Enter the Second String: ");
    gets(y);
    val = mystrcmp(x,y);
    printf("%d",val);
}
