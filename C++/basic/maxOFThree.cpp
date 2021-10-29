#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            cout << num1 << " is the greatest\n";
        }
        else
        {
            cout << num3 << " is the greatest\n";
        }
    }
    else
    {
        if (num2 > num3)
        {
            cout << num2 << " is the greatest\n";
        }
        else
        {
            cout << num3 << " is the greatest\n";
        }
    }
    return 0;
}
