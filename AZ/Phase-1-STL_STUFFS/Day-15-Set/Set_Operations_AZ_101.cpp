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
        int n, m;
        cin >> n >> m;
        set<int> uni, inter, diff;
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            uni.insert(x);
            inter.insert(x);
            diff.insert(x);
        }
        set<int> inters;
        for (int i = 0; i < m; ++i)
        {
            int x;
            cin >> x;
            uni.insert(x);
            if (inter.find(x) != inter.end())
            {
                inters.insert(x);
            }
            if (diff.find(x) != diff.end())
            {
                diff.erase(x);
            }
        }
        for (int i : uni)
        {
            cout << i << " ";
        }
        cout << "\n";
        for (int i : inters)
        {
            cout << i << " ";
        }
        cout << "\n";
        for (int i : diff)
        {
            cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}
