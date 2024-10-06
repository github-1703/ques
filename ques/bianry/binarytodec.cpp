//this code converts binary into decimal 
//more optimization like can convert decimal binary and use template

#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int n, rem, i = 0, sum = 0, temp;
   
    try
    { cout << "enter the binary number:";
    cin >> n;
    temp=n;

        while (n != 0)
        {
            rem = n % 10;

            if (rem != 0 && rem != 1)
            {
                throw rem;
            }
            else
                n = n / 10;
        }
    }
    catch (int rem)
    {
        cout << "!!! Wrong format!!!! enter binary number";
        return 1;
    }

    while (temp != 0)
    {
        rem = temp % 10;
        sum = sum + rem * pow(2,i);
        i++;
        temp = temp / 10;
    }
    cout << "the decimal of " << " is: " << sum;
    return 0;
}
