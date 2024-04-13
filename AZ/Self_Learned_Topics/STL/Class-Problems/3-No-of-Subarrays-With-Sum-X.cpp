// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    vector<int> prefix(n);
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            prefix[i] = a[i];
        }
        else
        {
            prefix[i] = prefix[i - 1] + a[i];
        }
    }
    int sum = 0;
    map<int, int> mp;
    mp[0]++;
    for (int i = 0; i < n; i++)
    {
        sum += mp[prefix[i] - x];
        mp[prefix[i]]++;
    }
    return 0;
}