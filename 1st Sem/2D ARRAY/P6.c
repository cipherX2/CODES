// Multiplication of two matrices
#include<stdio.h>
int main()
{
    int a[50][50],b[50][50],ab[50][50];
    int i,j,k,m,n,x,y;
    printf("Enter the size of the square matrix: ");
    scanf("%d%d",&m,&n);
    printf("Enter the elements: \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n\n\n");
    printf("Enter the size of the square matrix: ");
    scanf("%d%d",&x,&y);
    printf("Enter the elements: \n");

     for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n\n\n");
    if(n==x)
    {
        for(i=0;i<m;i++)
        {
            for(j=0;j<y;j++)
            {
                ab[i][j] = 0;
                for(k=0;k<n;k++)
                {
                    ab[i][j] += a[i][k]*b[k][j];
                

                }
            }
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<y;j++)
            {
                printf("%d\t",ab[i][j]);
            }
            printf("\n");
        }

    }
    else
    {
        printf("Inputs Invalid!!");
    }
}