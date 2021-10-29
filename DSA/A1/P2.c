#include <stdio.h>
#include <conio.h>
int main()
{
    int i, N, T, temp;
    scanf("%d", &T);
    scanf("%d", &N);
    int A[N];
    for (i = 0; i < N; i++)
    {
        scanf("%d", A[i]);
    }
    while (T != 0)
    {
        for (i = 0; i < N / 2; i++)
        {
            temp = A[i];
            A[i] = A[N - i - 1];
            A[N - i - 1] = temp;
        }
        for (i = 0; i < N; i++)
        {
            printf("%d ", A[i]);
        }
        T--;
    }
    getch();
    return 0;
}
