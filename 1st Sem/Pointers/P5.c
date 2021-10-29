// Finding substring using pointers
#include <stdio.h>
#include <string.h>
void mysubstring(char arr[], char sub[])
{
    int i, j, k, l, h;
    l = strlen(sub);
    for (i = 0; arr[i] != '\0'; i++)
    {
        k = i;
        for (j = 0; j <= l; j++)
        {
            if (arr[k] != sub[j])
            {
                break;
            }
            k++;
        }
        if (j == l)
        {
            printf("Substring found at %d", i);
            h++;
        }
    }
    printf("total substring found are: %d", h);
}
int main()
{
    char arr[100], sub[100];
    printf("Enter the Source string: ");
    gets(arr);
    printf("\nEnter the substring: ");
    gets(sub);
    mysubstring(arr, sub);
}
