#include <bits/stdc++.h>
using namespace std;

int getBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}

int main()
{
    int n;
    cin >> n;
    int position;
    cin >> position;
    int ans = getBit(n, position);
    cout << ans << endl;
    return 0;
}