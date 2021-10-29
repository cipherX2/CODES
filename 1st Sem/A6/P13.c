// Perfect squares which are even in range of 10000
#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,extra;
    for(i=1;i<=10000;i++)
    {
        extra=i;
        extra = extra*extra;  
        j = sqrt(extra);

        if(extra==j)
        {
            if(i%2==0)
            {
                printf("%d, ",i);
            }
        }        
    }
    return 0;
}