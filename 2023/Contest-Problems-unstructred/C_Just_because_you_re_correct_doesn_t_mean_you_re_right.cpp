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
        ll n;
        cin >> n;
        vector<vector<ll>> v;
        for (ll i = 0; i < n; i++)
        {
            vll temp;
            ll m;
            cin >> m;
            temp.pb(m);
            for (ll i = 0; i < m; i++)
            {
                ll frnd;
                cin >> frnd;
                temp.pb(frnd);
            }
            v.pb(temp);
        }

        vll deadlist(n + 1, 0);
        vll assesian(n + 1, 0);
        for (ll i = 0; i < v.size(); i++)
        {
            for (ll j = 1; j < v[i].size(); j++)
            {
                if (deadlist[v[i][j]] == 0)
                {
                    deadlist[v[i][j]] = 1;
                    assesian[i + 1] = 1;
                    break;
                }
            }
        }
        ll ans_ass = -1;
        ll ans_frnd = -1;
        for (int i = 1; i <= n; i++)
        {
            if (assesian[i] == 0)
            {
                ans_ass = i;
                break;
            }
        }
        if (ans_ass == -1)
        {
            cout << "OPTIMAL" << endl;
        }
        else
        {
            for (int i = 1; i <= n; i++)
            {
                if (deadlist[i] == 0)
                {
                    ans_frnd = i;
                    break;
                }
            }
            cout << "IMPROVE" << endl;
            cout << ans_ass << " " << ans_frnd << endl;
        }
    }
}

int main()
{
    RadheKrishna;
    HarHarMahadev();
    return 0;
}