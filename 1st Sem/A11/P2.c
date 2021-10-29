//Concatenate string and store in another
#include <stdio.h>
#include <string.h>
int main()
{
    char a[50], b[50], c[50];
    int i, l1, l2;
    printf("Enter the 1st string: ");
    gets(a);
    printf("Enter the 2nd string: ");
    gets(b);
    l1 = strlen(a);
    l2 = strlen(b);
    for (i = 0; i <= l2; i++)
    {
        a[l1 + i] = b[i];
    }
    printf("%s", a);
}
