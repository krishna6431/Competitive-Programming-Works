// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int maxi = 0;
    for (int i = 1; i <= n; i++)
    {
        int t;
        cin >> t;
        maxi = max(maxi, t);
    }
    cout << maxi << endl;
    return 0;
}