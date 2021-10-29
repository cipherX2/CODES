// To check a character is present or not
#include <string.h>
#include <stdio.h>
int main()
{
    char a[50], ch, v;
    printf("Enter the String");
    gets(a);
    printf("Enter what character you wanna check:");
    scanf("%c", &ch);
    v = strlen(a);
    int i;
    for (i = 0; i <= v; i++)
    {
        if (a[i] == ch)
        {
            printf("Character found");
            break;
        }
        else
        {
            printf("Not found");
        }
    }
}
