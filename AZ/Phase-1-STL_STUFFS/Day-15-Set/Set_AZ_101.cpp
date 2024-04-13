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
        set<int> st;
        while (q--)
        {
            string s;
            cin >> s;
            if (s == "add")
            {
                int x;
                cin >> x;
                st.insert(x);
            }
            else if (s == "erase")
            {
                int x;
                cin >> x;
                auto it = st.find(x);
                if (it != st.end())
                {
                    st.erase(it);
                }
            }
            else if (s == "find")
            {
                int x;
                cin >> x;
                if (st.find(x) != st.end())
                {
                    cout << "YES\n";
                }
                else
                {
                    cout << "NO\n";
                }
            }
            else if (s == "print")
            {
                for (int i : st)
                {
                    cout << i << " ";
                }
                cout << "\n";
            }
            else
            { // empty
                st.clear();
            }
        }
    }
    return 0;
}
