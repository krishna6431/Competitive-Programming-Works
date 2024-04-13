#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int q;
    cin >> q;
    stack<int> s1, s2;
    while (q--)
    {
        string s;
        cin >> s;
        if (s == "push")
        {
            int x;
            cin >> x;
            s1.push(x);
        }
        if (s == "pop")
        {
            if (!s2.empty())
            {
                int a = s2.top();
                s2.pop();
                cout << a << endl;
            }
            else
            {
                while (!s1.empty())
                {
                    s2.push(s1.top());
                    s1.pop();
                }
                int a = s2.top();
                s2.pop();
                cout << a << endl;
            }
        }
        if (s == "front")
        {
            if (!s2.empty())
            {
                int a = s2.top();
                cout << a << endl;
            }
            else
            {
                while (!s1.empty())
                {
                    s2.push(s1.top());
                    s1.pop();
                }
                int a = s2.top();
                cout << a << endl;
            }
        }
    }
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int _t = 1;
    cin >> _t;
    while (_t--)
    {
        solve();
    }
    return 0;
}
    