// To find the LCM of two numbers
#include<stdio.h>
void lcm(int ,int );
int main()
{
    int x,y;
    printf("Enter the two numbers: ");
    scanf("%d%d",&x,&y);
    lcm(x,y);
    return 9990;
}
void lcm(int a,int b)
{
    int max=0,c=0;
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
            c = max;
            break;
        }
        max++;
    }
    printf("LCM is : %d",c);
}