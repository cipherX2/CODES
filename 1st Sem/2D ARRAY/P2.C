//To make a lower traingular matrix from a give matrix
#include <stdio.h>
int main()
{
    int A[50][50];
    int i, j, m, n;
    printf("Enter the size of the square matrix:\n\n ");
    scanf("%d%d", &m, &n);

    printf("\n\n");
    printf("Enter the elements: ");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", A[i][j]);
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = m - 1; j > i; j--)
        {
            A[i][j] = 0;
        }
    }
    printf("\n\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }
    return 9990;
}