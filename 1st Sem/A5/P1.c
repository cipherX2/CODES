// To compute grade using if else construct 
#include<stdio.h>
int main()
{
    float m1,m2,m3,m4,m5;
    float sum = 0,x;
    printf("Enter the marks :       ");
    scanf("%f %f %f %f %f",&m1,&m2,&m3,&m4,&m5);
    sum = sum+m1+m2+m3+m4+m5;
    x = sum/5.0;

    if(x>=80)
    {
        printf("Congrats you got 'A' grade");
    }
    else if(x>=60 && x<80)
    {
        printf("Very-good it's 'B' grade");
    }

    else if(x>=45 && x<60) 
    {
        printf("Oops! It's 'C' Grade");
    }
    else if(x<45)
    {
        printf("Please try hard! U got D grade");
    }
    
    return 9990;





}