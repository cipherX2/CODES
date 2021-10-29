//Selection short #ascending
#include<stdio.h>
int main()
{
    int arr[100],size,i,j,min,temp;
    printf("Enter the size: ");
    scanf("%d",&size);

    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n");
    for(i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    // Now to use selection short
    for(i=0;i<size-1;i++)
    {
        min = i;
        for(j=i+1;j<size;j++)
        {
            if (arr[j]<arr[min])
            {
                min = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] =  temp;
        
    }
    for(i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
    }
