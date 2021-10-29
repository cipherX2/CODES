// Numbers which have same digits in range of 1000
#include<stdio.h>
int main()
{
    int i,num,y,z,k,p,o;
    for(i=11;i<=1000;i++)
    {
        num = i;
       while(num<=99)
       {
            y = num%10;
            num = num/10;
            while(num>0)
            {
                z= num%10;
                if(z==y)
                {
                    printf("%d, ",i);
                }
                break;
            }

       }
       num = i;
       while(num>100)
       {
           k = num%10;
           num = num/10;
           while(num>0)
           {
               p = num%10;
               num = num/10;
               while(num>0)
               {
                   o = num%10;
                   num = num/10;
                   if(k==p && k==o)
                   {
                       printf("%d, ",i);
                   }
                   break;
            }   }
        }





    }




}