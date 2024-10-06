

#include <iostream>

using namespace std;
int main()
{
    int i, j, n;
    cout << "enter the number of lines:";
    cin >> n;

    for (i = n; i >= 1; i--)
    {
        for (j = i; j <= n; j++) // for stars
        {
            cout << "*";
        }

        if (i != 1) // for spaces
        {
            for (j = 2 * (i - 2) + 1; j > 0; j--)
            {
                cout << " ";
            }
        }
        else
        {
            cout << "*";
        }
        if (i != 1)
        {

            for (j = i; j <= n; j++)
            {
                cout << "*";
            }
        }
        else
        {
            for (j = i+2; j <= n; j++)//why i+2 is giving me the correct code instead of i+1

            {
                cout << "*";
            }
        }
        cout << endl;
    }
    int k = n - 1;
    for (i = k; i >= 1; i--) 
    {
        for (j = 1; j <= i; j++)// for stars
        {
            cout << "*";
        }
        // for spaces;
        for (j = 2*(k - i) + 1; j >= 1; j--)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

