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
    int sumSequence;
    for (int i = 0; i < n; i++)
    {
        sumSequence = 0;
        for (int j = i; j < n; j++)
        {
            sumSequence += arr[j];
            cout << sumSequence << endl;
        }
    }
}