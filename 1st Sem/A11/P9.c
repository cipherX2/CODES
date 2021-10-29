// Convert uppercase to lowercase
#include <stdio.h>
void lowercase(char x[])
{
    int i = 0;
    while (x[i] != '\0')
    {
        if (x[i] >= 'a' && x[i] <= 'z')
        {
            x[i] = x[i] - 32;
        }
        i++;
    }
    printf("Lowercase is: %s", x);
}
int main()
{
    char x[50];
    printf("Enter the string: ");
    gets(x);
    lowercase(x);
    return 0;
}