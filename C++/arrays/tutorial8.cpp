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
    int maxElement = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        maxElement = max(maxElement, arr[i]);
    }
    cout << maxElement << " ";
}