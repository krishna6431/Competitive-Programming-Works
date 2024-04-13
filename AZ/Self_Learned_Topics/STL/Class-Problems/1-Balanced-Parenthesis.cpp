// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<char, int> mp;
    mp['('] = +1;
    mp['{'] = +2;
    mp['['] = +3;
    mp[')'] = -1;
    mp['}'] = -2;
    mp[']'] = -3;
    string str;
    cin >> str;
    stack<char> stk;
    int is_balanced = 1;
    for (auto v : str)
    {
        int val = mp[v];
        if (val > 0)
        {
            stk.push(val);
        }
        else
        {
            if (!stk.empty() and (stk.top() + val) == 0)
            {
                stk.pop();
            }
            else
            {
                is_balanced = 0;
                break;
            }
        }
    }
    if (!stk.empty())
    {
        is_balanced = 0;
    }

    if (is_balanced)
    {
        cout << "Balanced" << endl;
    }
    else
    {
        cout << "Not Balanced" << endl;
    }

    return 0;
}