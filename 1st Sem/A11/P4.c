// Reversing a string using user defined function
#include<stdio.h>
#include<string.h>
void reverse(char x[])
{
    int i=0,j,temp;
    j = strlen(x);
    if(j%2==0)
    {
        while(i<j)
        {
            temp = x[i];
            x[i]= x[j];
            x[j] = temp;
            i++;
            j--;
        }
            printf("%s",x);
    }
    else
    {
        while(i!=j)
        {
            temp = x[i];
            x[i] = x[j];
            x[j] = temp;
            i++;
            j--;
        }
            printf("%s",x);
    }
}
void irreverse(char x[])
{
    int i,j;
    j = strlen(x);
    for(i=j;i>=0;i--)
    {
        printf("The revrese is %s ",x);
    }
}
int main()
{
    char x[50];
    printf("Enter the String: ");
    gets(x);
    irreverse(x);
    return 0;
}

