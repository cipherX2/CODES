// To check whether a given cahracter is present or not
#include<stdio.h>
#include<string.h>
void mygetchar(char x[],char y)
{
    int i,l1;
    l1 = strlen(x);
    for(i=0;i<=l1;i++)
    {
        if(x[i]==y)
        {
            printf("Character Found");
            break;
        }
    }
}
int main()
{
    char str[100],y;
    printf("Enter the string: \n");
    gets(str);
    printf("Enter the character to check: ");
    scanf("%c",y);
    mygetchar(str,y);
}