#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        unordered_map<string, int> mp;
        for (int i = 0; i < str.length(); i++)
        {
            string subStr;
            // Second loop is generating sub-string
            for (int j = i; j < str.length(); j++)
            {
                subStr += str[j];
                mp[subStr]++;
            }
        }
        vector<pair<int, string>> v;
        for (auto x : mp)
        {
            if (x.second > 1)
            {
                v.push_back({(x.first).length(), x.first});
            }
        }
        // for(auto x:v){
        //     cout<<x.first<<" "<<x.second<<endl;
        // }
        sort(v.begin(), v.end());
        cout << v.end() - v.begin() - 1 << endl;
        // cout << v[v.end() - v.begin() - 1] << endl;
    }
    return 0;
}