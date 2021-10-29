// To compute the length of the string.
#include<stdio.h>
void mystrlen(char a[])
{
    int i=0,count=0;
    while(a[i]!='\0')
    {
        count++;
        i++;
    }
    printf("The length is: %d",count);

}
#include<stdio.h>
void main()
{
    char a[100];
    printf("Enter the String: ");
    gets(a);
    mystrlen(a);
}