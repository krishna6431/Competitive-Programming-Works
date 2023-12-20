/*
     ॐ त्र्यम्बकं यजामहे सुगन्धिं पुष्टिवर्धनम् |
     उर्वारुकमिव बन्धनान्मृत्योर्मुक्षीय माऽमृतात् ||
*/
// All Important Header Files
#include <bits/stdc++.h>
// ALL IMPORTANT MACROS
#define pb push_back
#define mp make_pair
#define fr first
#define sc second
#define deb(x) cout << x << endl;
#define loop(start, end, incr) for (int i = start; i < end; i += incr)
#define MOD 1000000007
#define len(x) x.size()
#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))
#define all(v) v.begin(), v.end()
#define alla(a, n) a, a + n
#define endl "\n"
#define RadheKrishna                  \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
// USING NAME SPACE
using namespace std;
// SOME TYPEDEF DECLARATION
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<vll> vvll;
typedef vector<string> vs;
#define que_max priority_queue<int>
#define que_min priority_queue<int, vi, greater<int>>
#define bug(...) __f(#__VA_ARGS__, __VA_ARGS__)

template <typename Arg1>
void __f(const char *name, Arg1 &&arg1)
{
    cout << name << " : " << arg1 << endl;
}
template <typename Arg1, typename... Args>
void __f(const char *names, Arg1 &&arg1, Args &&...args)
{
    const char *comma = strchr(names + 1, ',');
    cout.write(names, comma - names) << " : " << arg1 << " | ";
    __f(comma + 1, args...);
}

// CODE WRITTEN BY mr_krishna(cc,cf,google)/krishna_6431(gfg,leet)
void HarHarMahadev()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, q;
        cin >> n >> q;
        vll v(n);
        for (auto &x : v)
        {
            cin >> x;
        }
        vector<vector<ll>> qu;
        for (int i = 0; i < q; i++)
        {
            ll a, b;
            cin >> a >> b;
            qu.pb({a, b});
        }
        vll rng(n + 1);
        for (int i = 0; i < q; i++)
        {
            rng[qu[i][0]]++;
            rng[qu[i][1] + 1]--;
        }
        for (int i = 1; i <= n; i++)
        {
            rng[i] = rng[i - 1] + rng[i];
        }

        vpll arr(n + 1);
        for (int i = 0; i <= n; i++)
        {
            arr[i].first = rng[i];
            arr[i].second = i;
        }
        sort(all(rng), greater<int>());
        sort(all(arr), greater<pll>());
        sort(all(v), greater<ll>());
        // for (auto x : v)
        // {
        //     cout << x << " ";
        // }
        // cout << endl;
        // for (auto x : rng)
        // {
        //     cout << x << " ";
        // }
        // cout << endl;
        ll ans = 0;
        ll itr = 0;
        while (rng[itr] != 0)
        {
            ans += (ll)rng[itr] * v[itr];
            itr++;
        }
        cout << ans << endl;

        // for (auto x : arr)
        // {
        //     cout << x.first << " " << x.second << endl;
        // }
        ll no = n;
        vll res(n + 1);
        for (int i = 0; i < arr.size(); i++)
        {
            res[arr[i].second] = no;
            no--;
        }
        for (int i = 1; i <= n; i++)
        {
            cout << res[i] << " ";
        }
        cout << endl;
    }
}
// class Solution
// {
// public:
//     int maxSumRangeQuery(vector<int> &nums, vector<vector<int>> &req)
//     {
//         int n = nums.size();
//         vector<int> ranges(n + 1);
//         for (int i = 0; i < req.size(); i++)
//         {
//             ranges[req[i][0]]++;
//             ranges[req[i][1] + 1]--;
//         }
//         for (int i = 1; i <= n; i++)
//         {
//             ranges[i] = ranges[i - 1] + ranges[i];
//         }
//         sort(ranges.begin(), ranges.end(), greater<int>());
//         sort(nums.begin(), nums.end(), greater<int>());
//         int mod = 1e9 + 7;
//         int i = 0;
//         long long sum = 0;
//         while (ranges[i] != 0)
//         {
//             sum += (long long)ranges[i] * nums[i];
//             i++;
//         }
//         return sum % mod;
//     }
// };
int main()
{
    RadheKrishna;
    HarHarMahadev();
    return 0;
}