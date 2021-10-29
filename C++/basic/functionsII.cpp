#include <iostream>
#include <cmath>
using namespace std;

void fib(int x)
{
    int t1 = 0;
    int t2 = 1;
    int nextTerm;
    for (int i = 1; i <= x; i++)
    {
        cout << " " << t1;
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return;
}

int main()
{
    int x;
    cin >> x;
    fib(x);
    return 0;
}