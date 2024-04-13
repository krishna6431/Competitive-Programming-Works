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
        stack<int> st;
        while (q--)
        {
            string s;
            cin >> s;
            if (s == "add")
            {
                int x;
                cin >> x;
                st.push(x);
            }
            else if (s == "remove")
            {
                if (!st.empty())
                {
                    st.pop();
                }
            }
            else
            {
                if (!st.empty())
                { // print
                    cout << st.top() << "\n";
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
