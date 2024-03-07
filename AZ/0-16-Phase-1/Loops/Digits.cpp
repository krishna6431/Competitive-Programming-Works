// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        if (n == 0)
        {
            cout << "0 " << endl;
            continue;
        }
        while (n)
        {
            cout << n % 10 << " ";
            n /= 10;
        }
        cout << endl;
    }
    return 0;
}