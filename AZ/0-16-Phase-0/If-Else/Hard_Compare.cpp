// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    if (b * log10(a) > d * log10(c))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}