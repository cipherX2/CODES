//Bubble sort using pointers
#include <stdio.h>
void myinput(int *, int);
void mydisplay(int *, int);
void mysort(int *, int);
int main()
{
    int arr[100], size;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    myinput(arr, size);
    mydisplay(arr, size);
    mysort(arr, size);
    mydisplay(arr, size);
}
void myinput(int *p, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        scanf("%d", p + i);
    }
}
void mydisplay(int *p, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d\t", *(p + i));
    }
}
void mysort(int *p, int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (*(p + j) > *(p + j + 1))
            {
                temp = *(p + j);
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = temp;
            }
        }
    }
}
