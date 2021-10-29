#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    int number, sum = 0;
    cin >> number;
    if (number > 0)
    {
        int count = 0;
        int dummy = number;
        while (dummy != 0)
        {
            dummy /= 10;
            count++;
        }
        dummy = number;
        while (number != 0)
        {
            int rem = number % 10;
            sum += pow(rem, count);
            number /= 10;
        }
        if (sum == dummy)
        {
            cout << "Armstrong" << endl;
        }
        else
        {
            cout << "Nope" << endl;
        }
        cout << count;
    }
}