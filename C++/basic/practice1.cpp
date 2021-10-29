#include <iostream>
#include <cmath>
using namespace std;

int sumAll(int x)
{
    int sum = 0;
    for (int i = 1; i <= x; i++)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    int x;
    int result;
    cin >> x;
    result = sumAll(x);
    cout << result << endl;
    return 0;
}