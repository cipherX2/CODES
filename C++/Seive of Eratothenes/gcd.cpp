#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    int rem;
    while (b != 0)
    {
        rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}

int main()
{
    int a, b;
    cin >> a >> b;
    int ans = gcd(a, b);
    cout << ans << endl;
    return 0;
}
