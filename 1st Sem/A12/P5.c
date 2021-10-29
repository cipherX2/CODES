// To input and print the elements of an array using pointers
#include<stdio.h>
void input(int *,int );
void display(int *,int );
void mysort(int *,int );
int main()
{
    int arr[100],size,*ptr;
    ptr = &arr[0];
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    printf("\nEnter the elements:\n");
    input(arr,size);
    display(arr,size);
    printf("\n\n");
    mysort(arr,size);
}
void input(int *p,int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        scanf("%d",(p+i));
    }
}
void display(int *p,int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("%d\t",*(p+i));
    }
}
void mysort(int *p,int size)
{
    int i,j,temp;
    for(i=0;i<size-1;i++)
    {
        for(j=0;j<size-1-i;j++)
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