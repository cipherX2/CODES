#include <bits/stdc++.h>
using namespace std;

int unset(int n,int pos)
{
    return (n ^ (1<<pos));
}

int main()
{
    int n;
    cin >> n;
    int pos;
    cin >> pos;
    cout << unset(n, pos) << endl;
    return 0;
}