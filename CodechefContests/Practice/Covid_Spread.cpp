#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int t, d, p;
    long long int n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> p >> d;
        if (d == 0)
        {
            n = 1;
        }
        else if (d >= 1 && d <= 10)
        {
            n = pow(2, d);
        }
        else
        {
            n = 1024 * (pow(3, (d - 10)));
            cout << "N ki value: " << n << endl;
        }
        if (n == p)
        {
            cout << n << endl;
        }
        else if (n > p)
        {
            cout << p << endl;
        }
        else
        {
            cout << n << endl;
        }
    }

    return 0;
}