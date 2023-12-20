#include <bits/stdc++.h>
using namespace std;
int main()
{
    // ACE, BDF, CEG, DFA, EGB, FAC, and GBD;
    unordered_map<string, int> mp;
    mp["ACE"] = 1;
    mp["BDF"] = 1;
    mp["CEG"] = 1;
    mp["DFA"] = 1;
    mp["EGB"] = 1;
    mp["FAC"] = 1;
    mp["GBD"] = 1;
    string str;
    cin >> str;
    if (mp[str] == 1)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}