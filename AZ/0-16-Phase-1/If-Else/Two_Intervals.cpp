// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
    if (l2 > r1)
    {
        cout << -1 << endl;
    }
    else
    {
        int a = max(l1, l2);
        int b = min(r1, r2);
        cout << a << " " << b << endl;
    }
    return 0;
}