/*

    cipher: the peaceful soul

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "jweijwqin  wqdoqw wqoiqwpp";

    for (int i = 0; i < str.size(); i += 1)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
    }
    
    cout << str << endl;

    string str1 = "SKAD KLSKW QWLKE WQ";
    for (int i = 0; i < str1.size(); i++)
    {
        if (str1[i] >= 'A' && str1[i] <= 'Z')
        {
            str1[i] += 32;
        }
    }
    cout << str1 << endl;

    return 0;
}


// string s = "fkdfkdsdsf";
// transform(s.begin(),s.end(),s.begin(),::toupper); // 
// transform(s.begin(),s.end(),s.begin(),::tolower);