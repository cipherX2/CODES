//To concatenate two strings using user defined functions
#include<stdio.h>
#include<string.h>
void mystrcat(char x[],char y[])
{
    int l1,l2,i;
    l1 = strlen(x);
    l2 = strlen(y);
    for(i=0;i<=l2;i++)
    {
        x[l1+i] = y[i];
    }
    printf("%s",x);
}
int main()
{
    char x[100],y[100];
    printf("Enter The 1st String\n:  ");
    gets(x);
    printf("Enter the 2nd String\n: ");
    gets(y);
    mystrcat(x,y);
}