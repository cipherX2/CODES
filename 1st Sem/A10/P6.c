// To compute lcm of two numbers
#include<stdio.h>
int lcm(int ,int );
int main()
{
    int n1,n2,x,y;
    printf("Enter any two integer: ");
    scanf("%d%d",&n1,&n2);
    x = lcm(n1,n2);
    printf("Lcm is : %d",x);
}
int lcm(int a,int b)
{
    int max;
    if(a>b)
    {
        max = a;
    }
    else
    {
        max = b;
    }
    while(1)
    {
        if(max%a==0 && max%b==0)
        {
            return max;
            break;
        }
        max++;       
    }
    
}