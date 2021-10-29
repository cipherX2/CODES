#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, i, j;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    int element;
    bool flag = false;
    cin >> element;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (arr[i][j] == element)
            {
                cout << i << ' ' << j << endl;
                flag = true;
            }
        }
    }
    
    if (flag)
    {
        cout << "Element has been found";
    }
    else
    {
        cout << "Element not found";
    }
    return 0;
}