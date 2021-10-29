// To check for the substring
#include <stdio.h>
#include <string.h>
int mysubstring(char s[], char str[])
{
    int i, j, k, l;
    l = strlen(str);
    for (i = 0; s[i] != '\0'; i++)
    {
        k = i;
        for (j = 0; j <= l - 1; j++)
        {
            if (s[k] != str[j])
            {
                break;
            }
            k++;
        }
        if (j == l)
        {
            return (i);
        }
    }
    return 9;
}
int main()
{
    char s[100], str[100];
    int index;
    printf("Enter the string: \n");
    gets(s);
    printf("Enter the sub-string: \n");
    gets(str);
    index = mysubstring(s, str);
    if (index == 9)
    {
        printf("NOT FOUND");
    }
    else
    {
        printf("Substring Found at %d", index);
    }
}