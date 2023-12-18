#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

string s;
map<ll, ll> mp;
vector<ll> rec(ll l, ll r)
{
    ll num = 0, cnt = 0;
    vector<ll> vect;
    for (int i = l; i <= r; i++)
    {
        if (s[i] == '+' || s[i] == '-' || s[i] == '*')
        {
            vector<ll> vect1 = rec(l, i - 1), vect2 = rec(i + 1, r);
            cnt++;
            num = 0;
            for (int i1 = 0; i1 < vect1.size(); i1++)
            {
                for (int i2 = 0; i2 < vect2.size(); i2++)
                {
                    if (s[i] == '+')
                    {
                        vect.push_back(vect1[i1] + vect2[i2]);
                    }
                    else if (s[i] == '-')
                    {
                        vect.push_back(vect1[i1] - vect2[i2]);
                    }
                    else
                    {
                        vect.push_back(vect1[i1] * vect2[i2]);
                    }
                }
            }
        }
        else
        {
            num = 10 * num + ll(s[i] - '0');
        }
    }
    if (cnt == 0)
    {
        vect.push_back(num);
    }
    return vect;
}
int main()
{
    ll n, sum = 0, num = 1, num2 = 0, res = 0;
    cin >> s >> n;
    vector<ll> vect = rec(0, ll(s.size()) - 1), a(n), vect2;
    for (int i = 0; i < vect.size(); i++)
    {
        mp[vect[i]] = 1;
    }
    for (int i = 0; i <= s.size(); i++)
    {
        if (i == s.size() || s[i] == '+' || s[i] == '-')
        {
            num *= num2;
            vect2.push_back(num);
            num2 = 0;
            if (i < s.size() && s[i] == '+')
            {
                num = 1;
            }
            else
            {
                num = -1;
            }
        }
        else if (s[i] == '*')
        {
            num *= num2;
            num2 = 0;
        }
        if (i < s.size() && s[i] != '+' && s[i] != '-' && s[i] != '*')
        {
            num2 = 10 * num2 + ll(s[i] - '0');
        }
    }
    for (int i = 0; i < vect2.size(); i++)
    {
        sum += vect2[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == sum)
        {
            res += 5;
        }
        else if (mp[a[i]] == 1)
        {
            res += 2;
        }
    }
    cout << res;
    return 0;
}