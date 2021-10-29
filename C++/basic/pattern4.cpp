#include <iostream>
using namespace std;

int main()
{
    int k;
    for (int i = 1; i <= 5; i++)
    {
        k=i;
        for (int j = 1; j <= 5; j++)
        {
            if (j <= i)
            {
                cout << k;
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
}