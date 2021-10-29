#include <bits/stdc++.h>
using namespace std;

int noOfOnes(int n)
{
    int count = 0;
    while (n)
    {
        n = (n & (n - 1));
        count++;
    }
    return (count);
}

int main()
{
    int n;
    cin >> n;
    cout << noOfOnes(n) << endl;
    return 0;
}