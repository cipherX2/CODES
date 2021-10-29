//
#include <stdio.h>
void input(int[], int);
void display(int[], int);
int class_max(int[], int);
int class_min(int[], int);
int class_sum(int[], int);
int class_avg(int[], int);

int main()
{
    int arr[100], n, x, y, z, avge;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    input(arr, n);
    display(arr, n);
    x = class_max(arr, n);
    printf("Maximum is: %d", x);
    y = class_min(arr, n);
    printf("Minimum is: %d", y);
    z = class_sum(arr, n);
    printf("Sum is %d", z);
    avge = class_avg(arr, n);
    printf("Average is %d", avge);
}
void input(int arr[], int n)
{
    int i;
    printf("\nEnter the Elements:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}
void display(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
}
int class_max(int arr[], int n)
{
    int i, max;
    max = arr[0];
    for (i = 0; i < n; i++)
    {
        if (arr[i + 1] > max)
        {
            max = arr[i + 1];
        }
    }
    return max;
}
int class_min(int arr[], int n)
{
    int i, min;
    min = arr[0];
    for (i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}
int class_sum(int arr[], int n)
{
    int i, sum = 0;
    for (i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int class_avg(int arr[], int n)
{
    int i, avg, sum = 0;
    for (i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    avg = sum / n;
    return avg;
}