// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        cout << "floor " << a << " / " << b << " = " << a / b << endl;
        cout << "ceil " << a << " / " << b << " = " << (a + b - 1) / b << endl;
        cout << "round " << a << " / " << b << " = " << round(a * 1.0 / b) << endl;
    }
    return 0;
}