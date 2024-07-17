// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str;
    cin >> str;
    map<char, int> mp;
    for (auto &x : str)
    {
        mp[x]++;
    }
    int maxi = 0;
    for (auto &x : mp)
    {
        maxi = max(maxi, x.second);
    }
    string ans = "";
    set<char> st;
    for (int i = 0; i < str.size(); i++)
    {
        if (mp[str[i]] == maxi)
        {
            if (st.find(str[i]) == st.end())
            {
                ans += str[i];
                st.insert(str[i]);
            }
        }
    }
    cout << ans << endl;
    return 0;
}
