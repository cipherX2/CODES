// String length using using user define function
#include <stdio.h>
void stringlength(char str[])
{
    int i = 0, count = 0;
    while (str[i] != '\0')
    {
        count++;
        i++;
    }
    printf("The length is: %d", count);
}
int main()
{
    printf("%d", sizeof("3"));
}