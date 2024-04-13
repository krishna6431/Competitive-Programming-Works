#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

int main()
{
    IOS int t;
    cin >> t;
    while (t--)
    {
        int q1;
        cin >> q1;
        queue<int> q;
        while (q1--)
        {
            string s;
            cin >> s;
            if (s == "add")
            {
                int x;
                cin >> x;
                q.push(x);
            }
            else if (s == "remove")
            {
                if (!q.empty())
                {
                    q.pop();
                }
            }
            else
            {
                if (!q.empty())
                {
                    cout << q.front() << "\n";
                }
                else
                {
                    cout << "0\n";
                }
            }
        }
    }
    return 0;
}
