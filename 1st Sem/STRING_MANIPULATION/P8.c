// To check whether it is a pallindrome or not
#include<stdio.h>
#include<string.h>

void mypallindrome(char x[])
{
    int i,l;
    l = strlen(x);
    for(i=0;i<l/2;i++)
    {
        if(x[i]!=x[l-1-i])
        {
            printf("Not pallindrome");
            break;
        }
    }
    if(i==l/2)
        printf("Pallindrome");
}
int main()
{
    char x[100];
    printf("Enter the string: \n");
    gets(x);
    mypallindrome(x);
}