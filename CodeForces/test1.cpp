// All Important Header Files
#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
// CODE WRITTEN BY KRISHNA_6431
int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        map<char, int> m;
        for (int i = 0; i < s.size(); i++)
        {
            m[s[i]]++;
        }
        long long x1, y1;
        cin >> x1 >> y1;
        long long q;
        cin >> q;
        while (q--)
        {
            int flag = 0;
            long long l = 0, r = 0, u = 0, d = 0;
            long long x2, y2;
            cin >> x2 >> y2;
            long long res1, res2;
            res1 = x1 - x2;
            res2 = y1 - y2;
            if (res1 == 0 && res2 == 0)
            {
                cout << "YES " << 0 << endl;
                continue;
            }
            if (res1 > 0)
            {
                l = abs(res1);
            }
            else
            {
                r = abs(res1);
            }
            if (res2 > 0)
            {
                d = abs(res2);
            }
            else
            {
                u = abs(res2);
            }

            if (res1 >= 0 && res2 >= 0)
            {
                if (l <= m['L'] && d <= m['D'])
                {
                    cout << "YES " << l + d << endl;
                    flag = 1;
                }
            }

            else if (res1 <= 0 && res2 <= 0)
            {
                if (r <= m['R'] && u <= m['U'])
                {
                    cout << "YES " << r + u << endl;
                    flag = 1;
                }
            }

            else if (res1 >= 0 && res2 <= 0)
            {
                if (l <= m['L'] && u <= m['U'])
                {
                    cout << "YES " << l + u << endl;
                    flag = 1;
                }
            }

            else if (res1 <= 0 && res2 >= 0)
            {
                if (r <= m['R'] && d <= m['D'])
                {
                    cout << "YES " << l + d << endl;
                    flag = 1;
                }
            }
            if (flag == 0)
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
