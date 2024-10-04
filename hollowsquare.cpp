#include <iostream>
using namespace std;
int main()
{
    int i, j, n, k;
    cout << "entet the number of line:";
    cin >> n;
    // for upper half
    for (i = 0; i < n; i++)
    {

        for (j = n - i - 1; j >= 1; j--) // 1st space
        {
            cout << " ";
        }
        cout << "*";
        if (i != 0) // 2nd space and star
        {
            for (k = 2 * i - 1; k >= 1; k--) // odd numbber of spaces here
            {
                cout << " ";
            }
            cout
                << "*";
        }
        cout << endl;
    }
    
    //for lower half

    for (i = n; i > 1; i--)
    {
        for (j = i; j <= n; j++)
        {
            cout << " ";
        }
        cout << "*";
        
        if(i!=2)//for single star at last 
        {
            for (j = 2 * (i - 2) - 1; j >=1; j--)//printing odd number of spaces with the help of i;
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
}
