#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        stack<char> stk;
        int ans = 0;
        for (int i = 0; i < str.size();)
        {
            if (str[i] == '(')
            {
                stk.push('(');
                i++;
            }
            else
            {
                while (!stk.empty() && stk.top() == '(')
                {
                    stk.pop();
                    i++;
                }
                ans = ans + 1;
            }
        }
        cout << ans << endl;
    }
}