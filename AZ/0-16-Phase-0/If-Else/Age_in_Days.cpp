// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int year = n / 365;
        n = n % 365;
        int month = n / 30;
        n = n % 30;
        cout << year << " years\n"
             << month << " months\n"
             << n << " days" << endl;
    }
    return 0;
}