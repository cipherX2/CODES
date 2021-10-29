#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    char arr[26];

    for (int i = 0; i < 26; i++)
    {
        arr[i] = 0;
    }
    
    for (int i = 0; i < s.size(); i++)
    {
        arr[s[i] - 'a']++;
    }

    int max = INT_MIN;
    char ans = 'a';
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            ans = i + 'a';
        }
    }

    cout << max << " " << ans << endl;
    return 0;
}