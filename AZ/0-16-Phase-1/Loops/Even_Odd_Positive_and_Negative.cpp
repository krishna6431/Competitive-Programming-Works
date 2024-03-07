// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int even = 0;
    int odd = 0;
    int pos = 0;
    int neg = 0;
    int zero = 0;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int t;
        cin >> t;
        if (t == 0)
        {
            zero++;
        }
        if (t % 2 == 0)
        {
            even++;
        }
        if (t > 0)
        {
            pos++;
        }
    }
    odd = n - even;
    neg = n - pos;
    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << pos << endl;
    cout << "Negative: " << neg - zero << endl;
    return 0;
}