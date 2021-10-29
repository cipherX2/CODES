//To check for a symmetric matrix...........................
#include<stdio.h>
int main()
{
    int a[50][50],b[50][50];
    int i,j,m,n,count=0;
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
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    if(m==n)
    {
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
              b[j][i] = a[i][j];
            }
        }
         printf("The trnaspose is : ");
         printf("\n");
         for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
              printf("%d\t",b[i][j]);
            }
            printf("\n");
        }
          for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
              if(a[i][j]!=b[i][j])
              {
                  count++;
                  break;
              }
            }
            if(count==0)
            {
                printf("SYMMETRIC!");
            }
            else
            {
                printf("It's not!");
            }
        }
        
    }
    else
    {
        printf("Invalid Inputs!.");
    }
    return 9990;

}