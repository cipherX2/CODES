// To reverse a string using user defined function
#include <stdio.h>
#include <string.h>
void myreverse(char str[])
{
    int i, l;
    char ch;
    l = strlen(str);
    for (i = 0; i < l / 2; i++)
    {
        ch = str[i];
        str[i] = str[l - 1 - i];
        str[l - 1 - i] = ch;
    }
    printf("%s", str);
}
int main()
{
    char str[100];
    printf("Enter the String: \n");
    gets(str);
    myreverse(str);
    return 9990;
}
