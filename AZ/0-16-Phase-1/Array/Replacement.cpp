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
        vector<int> a(n);
        for (auto &x : a)
        {
            cin >> x;
            if (x < 0)
            {
                x = 2;
            }
            else if (x > 0)
            {
                x = 1;
            }
        }
        for (auto &x : a)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}