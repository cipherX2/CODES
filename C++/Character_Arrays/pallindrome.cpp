#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    char arr[n + 1];
    cin >> arr;

    bool check = true;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            check = false;
        }
    }
    if (check != false)
    {
        cout << "The word is a pallindrome" << endl;
    }
    else
    {
        cout << "The word is not a pallindrome" << endl;
    }
    return 0;
}