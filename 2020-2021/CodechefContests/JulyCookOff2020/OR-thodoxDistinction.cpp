//All Important Header Files
#include <bits/stdc++.h>
using namespace std;
//ALL IMPORTANT MACROS
#define pb push_back
#define mp make_pair
#define fr first
#define sc second
#define MOD 1000000007
#define len(x) x.size()
#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))
#define all(v) v.begin(), v.end()
#define alla(a, n) a, a + n

//SOME TYPEDEF DECLARATION
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<vll> vvll;
typedef vector<string> vs;

//CODE WRITTEN BY KRISHNA_6431

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v;
        vector<ll> res;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            v.pb(temp);
        }
        for (int i = 0; i < n; i++)
        {
            int temp = 0;
            for (int j = i; j < n; j++)
            {
                temp |= v[j];
                res.pb(temp);
            }
        }
        // for (int i = 0; i < res.size(); i++)
        // {
        //     cout << res[i] << " ";
        // }
        // cout << endl;

        map<ll, ll> m;
        for (int i = 0; i < res.size(); i++)
        {
            m[res[i]]++;
        }
        int flag = 1;
        for (map<ll, ll>::iterator itr = m.begin(); itr != m.end(); itr++)
        {
            if (itr->second > 1)
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}