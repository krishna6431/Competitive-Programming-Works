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
        int q;
        cin >> q;
        priority_queue<int> p;
        while (q--)
        {
            string s;
            cin >> s;
            if (s == "add")
            {
                int x;
                cin >> x;
                p.push(x);
            }
            else if (s == "remove")
            {
                if (!p.empty())
                {
                    p.pop();
                }
            }
            else
            {
                if (!p.empty())
                { // print
                    cout << p.top() << "\n";
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
