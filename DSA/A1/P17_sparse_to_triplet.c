// Sparse matrix to triplet form
#include <stdio.h>
void triplet(int[100][100], int, int);
int main()
{
    int arr[100][100], row, col, i, j;
    printf("Enter the dimesnsion of the sparse matrix: ");
    scanf("%d%d", &row, &col);
    triplet(arr, row, col);
}
void triplet(int arr[100][100], int row, int col)
{
    int tri[row][3], i, j, k = 1, m = 0;
    printf("\nEnter the matrix: ");
    printf("\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\nDisplaying........................\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n\nTriplet is:\n\n ");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (arr[i][j] != 0)
            {
                tri[k][0] = i;
                tri[k][1] = j;
                tri[k][2] = arr[i][j];
                ++k;
                ++m;
            }
        }
        tri[0][0] = row;
        tri[0][1] = col;
        tri[0][2] = m;
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d\t", tri[i][j]);
        }
        printf("\n");
    }
}