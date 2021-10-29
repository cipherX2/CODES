#include <bits/stdc++.h>
using namespace std;

int clearBit(int n, int position)
{
    int mask = ~(1 << position);
    return (n & mask);
}

int main()
{
    int n;
    cin >> n;
    int position;
    cin >> position;
    cout << clearBit(n, position) << endl;
    return 0;
}