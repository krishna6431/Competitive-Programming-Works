// All Important Header Files
#include <bits/stdc++.h>
using namespace std;
// CODE WRITTEN BY KRISHNA_6431
int main()
{

    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    int t;
    cin >> t;
    while (t--)
    {
        int a, k;
        cin >> a >> k;
        if (k == a)
        {
            cout << 0 << endl;
        }
        else if (k < a)
        {
            if (k == 0)
            {
                a % 2 ? cout << 1 << endl : cout << 0 << endl;
            }
            else
            {
                cout << abs(a - 2 * k) << endl;
            }
        }
        else
        {

            cout << abs(a - k) << endl;
        }
    }

    return 0;
}
