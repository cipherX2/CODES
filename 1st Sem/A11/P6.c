//Comparing two strings
#include <stdio.h>
#include <string.h>
void mysubstr(char x[], char y[])
{
    int i, j, k, z, l1, l2;
    char tp;
    l1 = strlen(x);
    l2 = strlen(y); //ompu
    tp = y[0];
    for (i = 0; i < l1; i++) //computer
    {
        printf("\nOk0");
        if (tp == x[i]) //o
        {
            printf("\nok1");
            z = i;
            for (j = 1; j < l2; j++)
            {
                printf("\nok2");
                tp = y[j]; //m
                if (tp == x[++z])
                {
                    printf("\nok3");
                }
            }
        }
    }
}
int main()
{
    int ad;
    char x[100], y[100];
    printf("Enter the String     : ");
    gets(x);
    printf("Enter the sub string : ");
    gets(y);
    mysubstr(x, y);
    printf("\n %d", ad);
    return 0;
}