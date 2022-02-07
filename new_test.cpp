#include <bits/stdc++.h>
using namespace std;
int main()
{

    // vector<int> v;
    // for (int i = 0; i < n; i++)
    // {
    //     int temp;
    //     cin >> temp;
    //     v.push_back(temp);
    // }
    // vector<int> v(n);
    // for (auto &itr : v)
    // {
    //     cin >> itr;
    // }
    //  vector v = // 1 2 2 2 3 5 5 5 4 5
    string str;
    cin >> str;

    map<char, int> umap;
    for (int i = 0; i < str.size(); i++)
    {
        // umap[v[i]] = 10;
        umap[str[i]]++;
    }
    cout << "Unordered Map Values: " << endl;
    cout << "Key Value" << endl;
    for (auto itr = umap.begin(); itr != umap.end(); itr++)
    {
        cout << itr->first << "      " << itr->second << endl;
    }

    for (auto itr = umap.begin(); itr != umap.end(); itr++)
    {
        if (itr->second >= 5)
        {
            cout << itr->first << endl;
        }
    }

    if (umap[2] >= 5)
    {
        cout << 'a' << endl;
    }

    // for (auto x : umap)
    // {
    //     cout << x.first << " " << x.second << endl;
    // }

    return 0;
}
