#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int number, i;
    cin >> number;
    for (i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            cout << number << " is not prime" << endl;
            break;
        }
    }
    if (i == number)
    {
        cout << number << " is prime";
    }
}