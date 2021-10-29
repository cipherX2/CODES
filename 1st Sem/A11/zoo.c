// to concatenate two strings
#include <stdio.h>
#include <string.h>
void mystrcpy(char str1[], char str2[], char *p)
{
    int n, m, l, i;
    n = strlen(str1);
    m = strlen(str2);
    l = m + n;

    for (i = 0; i < n; i++)
    {
        *(p + i) = str1[i];
    }
    for (i = n; i < l + 1; i++)
    {
        *(p + i) = str2[i - n];
    }
}
int main()
{
    int n, m, l;
    char S1[20], S2[20];
    printf("\n Enter first String: ");
    scanf("%s", S1);
    printf("\n Enter second String: ");
    scanf("%s", S2);
    n = strlen(S1);
    m = strlen(S2);
    l = m + n;
    char S3[l];
    mystrcpy(S1, S2, S3);
    printf("\n %s", S3);
    return 0;
}
