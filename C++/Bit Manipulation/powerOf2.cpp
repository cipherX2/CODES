#include <bits/stdc++.h>
using namespace std;

bool powerOf2(int n)
{
    return (n && !(n & (n - 1)));
}

int main()
{
    int n;
    cin >> n;
    cout << powerOf2(n) << endl;
    return 0;
}