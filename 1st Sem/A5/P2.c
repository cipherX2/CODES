//Calculating electric bill
#include<stdio.h>
int main()
{
        float p1,p2,t,eb;
        printf("\nEnter previous meter reading: ");
        scanf("%f", &p1);
        printf("Enter present meter reading: ");
        scanf("%f", &p2);
        t = p2 - p1;
        if(t <= 100)
                eb = t * 1.40;
        else if(t > 100 && t <= 200)
                eb = 140 + (t - 100) * 2.50;
        else
                eb = 140 + 250 + (t - 200) * 3.20;
        printf("\n\nElectric bill = Rs. %.2f\n\n\n", eb);
        return 0;
}
