//Maximum minimum and average of an array                         // Check the average
#include <stdio.h>
int main()
{
    int arr[100];
    int i, size, max, min, sum = 0;
    float avg;
    printf("Enter the size: ");
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < size; i++)
    {
        printf("%d, ", arr[i]);
    }
    max = min = arr[0];
    for (i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("The maximum is %d and minimum is %d", max, min);
    for (i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    if (sum != 0)
    {
        avg = sum / size;
    }

    printf("The average is: %d", avg);
}