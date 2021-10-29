// Sorting an array using pointers
#include<stdio.h>
void arraysort(int *,int );
int main()
{
    int arr[100],size,i;
    int *p;
    p = &arr[0];
    printf("Enter the size: ");
    scanf("%d",&size);
    printf("\nEnter the aaray: ");
    for(i=0;i<size;i++)
    {
        scanf("%d",p+i);
    }
    arraysort(arr,size);
}
void arraysort(int *p,int size)
{
    int i,j,temp;
    for(i=0;i<size-1;i++)
    {
        for(j=i+1;j<size-1-i;j++)
        {
            if(*(p+i)>*(p+i+1))
            {
                temp = *(p+i);
                *(p+i) = *(p+i+1);
                *(p+i+1) = temp;
            }
        }
    }
    for(i=0;i<size;i++)
    {
        printf("%d\t",*(p+i));
    }
}