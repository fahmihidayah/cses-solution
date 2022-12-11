#include <iostream>

using namespace std;

int main()
{
    long n;
    cin >> n;

    while (n >= 1)
    {
        if (n == 1)
        {
            cout << n << "\n";
            n = 0;
        }
        else
        {
            cout << n << "\n";
            if (n % 2 == 0)
            {
                n = n / 2;
            }
            else
            {
                n = n * 3 + 1;
            }
        }
    }

    return 0;
}