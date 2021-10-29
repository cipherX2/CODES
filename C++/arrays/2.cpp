#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    const int N = 1e6 + 2;
    int indx[N], minIndex = INT_MAX;
    for (int i = 0; i < N; i++)
    {
        indx[i] = -1;
    }
    for (int i = 0; i < n; i++)
    {
        if (indx[arr[i]] == -1)
        {
            indx[arr[i]] = i;
        }
        else
        {
            minIndex = min(minIndex, indx[arr[i]]);
        }
    }
    if (minIndex == INT_MAX)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << minIndex + 1 << endl;
    }
}