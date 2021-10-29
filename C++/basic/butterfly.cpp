#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 4; i++)
    {
        int j;
        for (j = 1; j <= 4; j++)
        {
            if (j <= i)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        if (j != 4)
        {
            cout << "\n";
        }
    }
    for (int k = 1; k <= 4; k++)
    {
        for (int l = 1; l <= 4; l++)
        {
            if (l >= 5 - k)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
    for (int k = 1; k <= 4; k++)
    {
        for (int l = 1; l <= 4; l++)
        {
            if (l <= 5 - k)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
    for (int k = 1; k <= 4; k++)
    {
        for (int l = 1; l <= 4; l++)
        {
            if (l >= k)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
}