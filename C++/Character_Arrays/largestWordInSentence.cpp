#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    char arr[n + 1];

    cin.getline(arr, n);
    cin.ignore();
    int i = 0;
    int currentLength = 0, maxLength = 0;
    int start = 0, end = 0;
    while (1)
    {
        if (arr[i] == ' ' || arr[i] == '\0')
        {
            if (currentLength > maxLength)
            {
                maxLength = currentLength;
                end = start;
            }
            currentLength = 0;
            start = i + 1;
        }
        else
        {
            currentLength++;
        }
        if (arr[i] == '\0')
        {
            break;
        }
        i++;
    }
    cout << maxLength << endl;
    for (int i = 0; i < maxLength; i++)
    {
        cout << arr[end + i];
    }
    return 0;
}