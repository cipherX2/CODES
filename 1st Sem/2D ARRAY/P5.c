//To find maximum and minimum in a matrix
#include<stdio.h>
int main()
{
    int a[50][50];
    int i,j,m,n,max,min;
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
    printf("\n\n");
    max = min = a[0][0];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]>max)
            {
                max = a[i][j];
            }
        }
    }
    printf("\nMaximum = %d",max);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(min>a[i][j])
            {
                min = a[i][j];
            }
        }
    }
    printf("Minimum = %d",min);

}    