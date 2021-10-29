// To add Two matrices
#include <stdio.h>
int main()
{
    int A[50][50], B[50][50], AB[50][50];
    int i, j, m, n, x, y;
    printf("Enter the size of first matrix: ");
    scanf("%d%d", &m, &n);
    printf("\n\n");
    printf("Enter the elements of first matrix:  ");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
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
    printf("\n\n");
    printf("Enter the size of second matrix: ");
    scanf("%d%d", &x, &y);
    printf("\nEnter the elements of 2nd matrix: ");
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }
    printf("\n\n");
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");

    if (m == x && n == y)
    {
        printf("Addition is: ");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                AB[i][j] = A[i][j] + B[i][j];
                printf("%d\t", AB[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("INVALID");
    }
    return 9990;
}