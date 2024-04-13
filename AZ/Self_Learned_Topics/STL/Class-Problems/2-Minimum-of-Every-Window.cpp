// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    multiset<int> mt;

    for (int i = 0; i < n; i++)
    {
        mt.insert(a[i]);
        if ((i - k) >= 0)
        {
            mt.erase(mt.find(a[i - k]));
        }
        if (mt.size() == k)
        {
            cout << *mt.begin() << " ";
        }
    }
    return 0;
}