#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool check(ll &cand, ll n)
{
    if (cand * cand > n)
        return true;
    return false;
}

int main()
{
    ll n;
    cin >> n;
    // apne search space ko acche se soch kar decide kro
    ll low = 0, high = 1e9;
    // hmesa yahi lena hain as answer
    ll ans = high + 1;

    while (low <= high)
    {
        ll mid = low + (high - low) / 2;
        if (check(mid, n) == 0)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
            ans = mid;
        }
    }
    cout << ans - 1 << endl;

    return 0;
}