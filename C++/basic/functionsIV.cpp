#include <iostream>
#include <cmath>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    while (n > 0)
    {
        fact *= n;
        n--;
    }
    return fact;
}

int main()
{
    int n, r;
    cin >> n >> r;
    int ans = factorial(n) / (factorial(r) * factorial(n - r));
    cout<<ans<<endl;
    return 0;
}