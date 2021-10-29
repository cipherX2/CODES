// Set Bit refers to set 1 in that position

#include <bits/stdc++.h>
using namespace std;

int setBit(int n, int pos)
{
    return (n | (1 << pos));
}

int main()
{
    int n;
    cin >> n;
    int pos;
    cin >> pos;
    cout << setBit(n, pos) << endl;
    return 0;
}