#include <stdio.h>
int main()

{
    int a, n;
    scanf("%d", &a);

    if (a >= 1 && a <= 100)

    {
        if (a % 2 == 0)

        {
            n = a / 2;

            if (a == 2)

                printf("NO");

            else
            {
                printf("YES");

                if (n % 2 == 0)

                    printf("\n%d %d", n, n);

                else
                    printf("\n%d %d", n - 1, n + 1);
            }
        }

        else
            printf("NO");
    }
    else
        printf("Invalid Input");

    return 0;
}