// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n;
    cin >> n;
    double sum = 0;
    for (int i = 1; i <= n; i++)
    {
        double t;
        cin >> t;
        sum += t;
    }
    cout << fixed << setprecision(7) << sum / n << endl;
    return 0;
}