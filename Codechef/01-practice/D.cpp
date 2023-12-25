#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll binarySearch(const vector<ll> &l, const vector<ll> &r, ll x)
{
    ll low = 0, high = l.size() - 1;
    while (low <= high)
    {
        ll mid = low + (high - low) / 2;
        if (l[mid] <= x && x <= r[mid])
        {
            return mid;
        }
        else if (x < l[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        vector<ll> l(k), r(k);
        for (ll i = 0; i < k; ++i)
        {
            cin >> l[i];
        }
        for (ll i = 0; i < k; ++i)
        {
            cin >> r[i];
        }

        ll q;
        cin >> q;

        while (q--)
        {
            ll x;
            cin >> x;

            ll i = binarySearch(l, r, x);
            if (i != -1)
            {
                ll a = min(x, r[i] + l[i] - x);
                ll b = max(x, r[i] + l[i] - x);
                reverse(s.begin() + a - 1, s.begin() + b);
            }
        }

        cout << s << endl;
    }

    return 0;
}