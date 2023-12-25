#include <bits/stdc++.h>
using namespace std;

int func(string s)
{
    unordered_map<string, int> map;
    string a = "";
    for (int i = 0; i < s.length(); i++)
    {
        a += s[i];
        if (a.length() == 2 && !map.count(a))
        {
            map[a] = 1;
            a = a.substr(1);
        }
        else if (map.count(a) && a.length() == 2)
        {
            a = a.substr(1);
        }
    }
    return map.size();
}

int main()
{
    string str;
    cin >> str;
    cout << func(str) << endl;
    return 0;
}