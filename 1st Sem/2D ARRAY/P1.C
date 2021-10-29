//To make the diagonal elements as 0 and other elements as 1
#include <stdio.h>
int main()
{
    int a[50][50];
    int i, j, m, n;
    printf("Enter the size of the square matrix: ");
    scanf("%d%d", &m, &n);
    printf("Enter the elements: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
            {
                a[i][j] = 0;
            }
            else
            {
                a[i][j] = 1;
            }
        }
    }
    printf("\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("\t%d", a[i][j]);
        }
        printf("\n");
    }
    return 9990;
}