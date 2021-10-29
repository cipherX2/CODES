//	WAP to compute standard deviation of the elements present in the array using function
#include <stdio.h>
#include <math.h>
void mydeviation(float[], int n);
int main()
{
    float arr[100];
    int n;
    printf("Enter the total no. of elements: ");
    scanf("%d", &n);
    mydeviation(arr, n);
}
void mydeviation(float arr[], int n)
{
    int i;
    float sum = 0.0, avg;
    printf("\nEnter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%f", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    avg = sum / n;
    printf("\nthe average is %f", avg);
    float sum1 = 0.0;
    for (i = 0; i < n; i++) //
    {
        sum1 += pow((arr[i] - avg), 2);
    }

    /*for (i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }*/

    printf("\nThe sum is: %f", sum);
    float stdv;
    stdv = sqrt(sum1 / n);
    printf("STANDARD DEVIATION IS: %.4f ", stdv);
}