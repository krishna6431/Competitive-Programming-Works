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
        if (a > b)
        {
            swap(a, b);
        }
        long long sum = 0;
        a = a + 1;
        if (a % 2 == 0)
        {
            a++;
        }
        while (a < b)
        {
            sum += a;
            a += 2;
        }
        cout << sum << endl;
    }
    return 0;
}