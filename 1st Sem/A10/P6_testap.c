#include<stdio.h>
int lcm(int ,int );
int main()
{
    int x,y,z;
    printf("Enter any two integer to check: ");
    scanf("%d%d",&x,&y);
    z = lcm(x,y);
     printf("Lcm is: %d ",z);
    return 0;
}
int lcm(int a,int b)
{
    int i,p;
    for(i=1;i<=a*b;i++)
    {
        if(i%a==0 && i%b==0)
        {
            p = i; // lcm is p
            break;
        }
    }
    return p;
}