//Tocheck a number is an armstrong or not
#include<stdio.h>
int main()
{
    int x,count = 0,rem,mul=1,result = 0,cnt;
    printf("Enter any number to check");
    scanf("%d",&x);

    int q = x;
    while(q!=0)
    {
        q = q/10;
        count++;
    }

    q = x;
    cnt = count;

    while(q!=0)
    {
        rem = q%10;
        while(cnt!=0)
        {
            mul = mul*rem;
            cnt--;
        }
        result = result + mul;
        mul = 1;
        q = q/10;
        cnt = count;
    }
    if(result==x)
    {
        printf("It is an amrstrong");
    }
    else{
        printf("It's not armstrong");
    }
    return 9990;
}