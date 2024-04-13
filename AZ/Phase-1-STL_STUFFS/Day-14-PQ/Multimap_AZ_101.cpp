#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

int main()
{
    IOS;
    int t;
    cin >> t;
    while (t--)
    {
        int q;
        cin >> q;
        multimap<string, int> m;
        while (q--)
        {
            string s;
            cin >> s;
            if (s == "add")
            {
                string x;
                int y;
                cin >> x >> y;
                m.insert({x, y});
            }
            else if (s == "erase")
            {
                string x;
                cin >> x;
                auto it = m.find(x);
                if (it != m.end())
                {
                    m.erase(it);
                }
            }
            else if (s == "eraseall")
            {
                string x;
                cin >> x;
                if (m.find(x) != m.end())
                {
                    m.erase(x);
                }
            }
            else
            {
                string x;
                cin >> x;
                auto it = m.find(x);
                if (it != m.end())
                {
                    cout << it->second << "\n";
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
