// To find transpose
#include<stdio.h>
int main()
{
    int a[50][50];
    int i,j,m,n,temp;
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
    printf("\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    if(m==n)
    {
        printf("The trnaspose is : ");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
              if(i<j)
              {
                 temp = a[i][j];
                 a[i][j] = a[j][i];
                 a[j][i] = temp; 
               }
            }
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%d\t",a[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("This program only works for square matrices!.");
    }
}

