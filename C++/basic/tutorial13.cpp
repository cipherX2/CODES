#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int x)
{
    for (int i = 2; i < sqrt(x); i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int x, y;
    cin >> x >> y;
    for (int i = x; i <= y; i++)
    {
        if (isPrime(i))
        {
            cout << i << '\t';
        }
    }
    return 0;
}