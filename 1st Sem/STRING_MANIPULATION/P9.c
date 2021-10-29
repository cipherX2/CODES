// To convert the string into lowercase
#include<stdio.h>
void mylowercase(char x[])
{
    int i=0;
    while(x[i]!='\0'){
    if(x[i]>='a'&& x[i]<='z')
    {
        x[i] = x[i] - 32;
    }i++;}
    printf("%s",x);
    
}
int main()
{
    char x[100];
    printf("Enter the string: \n ");
    gets(x);
    mylowercase(x);
}