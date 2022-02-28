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
#define display(start, end) for (int i = start; i < end; i++)
#define MOD 1000000007
#define len(x) x.size()
#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))
#define all(v) v.begin(), v.end()
#define alla(a, n) a, a + n
#define endl "\n"
#define fast                          \
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

class contributor
{
public:
    string contrib;
    ll skill_count;
    vector<pair<string, ll>> v;
};

class project
{
public:
    string name;
    ll dur;
    ll reward;
    ll day;
    ll number;
    vector<pair<string, ll>> v;
    vector<string> res;
};
// CODE WRITTEN BY mr_krishna/krishna_6431

void hashcode(ll c, ll p, contributor contri[], project proj[])
{
    cout << p << endl;
    set<string> s;
    for (int i = 0; i < p; i++)
    {
        cout << proj[i].name << endl;
        ll k = proj[i].number;
        for (int j = 0; j < k; j++)
        {
            for (int l = 0; l < c; l++)
            {
                ll m = contri[i].skill_count;
                for (int n = 0; n < m; n++)
                {
                    if (proj[i].v[j].first == contri[l].v[n].first && proj[i].v[j].second - 1 <= contri[l].v[n].second)
                    {
                        s.insert(contri[l].contrib);
                    }
                }
            }
        }
        vector<string> v(s.begin(), s.end());
        for (int ix = 0; ix < v.size(); ix++)
        {
            cout << v[ix] << " ";
        }
        cout << endl;
    }
}

void solve()
{
    ll c, p;
    cin >> c >> p;
    // vector<contributor> contri(c);
    contributor contri[c];
    for (int i = 0; i < c; i++)
    {
        cin >> contri[i].contrib;
        ll n;
        cin >> n;
        contri[i].skill_count = n;
        for (int j = 0; j < n; j++)
        {
            string str;
            ll data;
            cin >> str >> data;
            contri[i].v.push_back({str, data});
        }
    }

    // vector<project> proj(p);
    project proj[p];
    for (int i = 0; i < c; i++)
    {
        cin >> proj[i].name;
        ll d;
        cin >> d;
        proj[i].dur = d;
        ll s;
        cin >> s;
        proj[i].reward = s;
        ll b;
        cin >> b;
        proj[i].day = b;
        cin >> d;
        proj[i].number = d;
        for (int j = 0; j < d; j++)
        {
            string str;
            cin >> str;
            ll data;
            cin >> data;
            proj[i].v.push_back({str, data});
        }
    }
    hashcode(c, p, contri, proj);
}

int main()
{
    fast;

#ifndef ONLINE_JUDGE
    freopen("A.txt", "r", stdin);
    freopen("outputA.txt", "w", stdout);
#endif
    // int t;
    // cin >> t;
    // int tc = 1;
    // while (t--)
    // {
    //     // cout << "Case #" << tc << ": ";
    //     tc++;
    solve();
    // }
    return 0;
}
