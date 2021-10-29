#include <iostream>
#include <cmath>
using namespace std;

int factorial(int x)
{
    int fact = 1;
    while (x > 0)
    {
        fact *= x;
        x--;
    }
    return fact;
}

int main()
{
    int x, fact;
    cin >> x;
    fact = factorial(x);
    cout << fact << endl;
}