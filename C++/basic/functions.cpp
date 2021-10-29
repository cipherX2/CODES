#include <iostream>
using namespace std;

int greatestNumber(int, int, int, int);

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int a, b, c, d, e;
    cin >> a >> b >> c >> d;
    e = greatestNumber(a, b, c, d);
    cout << e << endl;
}

int greatestNumber(int a, int b, int c, int d)
{
    int x, y;
    if (a > b)
    {
        x = a;
    }
    else
    {
        x = b;
    }
    if (c > d)
    {
        y = c;
    }
    else
    {
        y = d;
    }
    if (x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}
