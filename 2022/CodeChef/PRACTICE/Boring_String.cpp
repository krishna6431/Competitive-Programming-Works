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

string solveHelper(string str)
{
    ll size = 1;
    string ans = "";
    ans += str[0];
    string finalAns = "";
    vector<string> all;
    for (int i = 1; i < str.size(); i++)
    {
        if (str[i] == str[i - 1])
        {
            size++;
            ans += str[i];
        }
        else
        {
            if (ans.size() > finalAns.size())
            {
                finalAns = ans;
                all.push_back(finalAns);
            }
            size = 1;
            ans = str[i];
        }
    }
    return all[all.size() - 1];
}
vector<string> solveHelper2(string str, string pat)
{
    ll size = 1;
    string ans = "";
    ans += str[0];
    string finalAns = "";
    vector<string> all;
    for (int i = 1; i < str.size(); i++)
    {
        if (str[i] == str[i - 1])
        {
            size++;
            ans += str[i];
        }
        else
        {
            if (ans.size() == pat.size())
            {
                finalAns = ans;
                all.push_back(finalAns);
            }
            size = 1;
            ans = str[i];
        }
    }
    if (ans.size() == pat.size())
    {
        finalAns = ans;
        all.push_back(finalAns);
    }

    return all;
}

static bool cmp(pair<int, string> p1, pair<int, string> p2)
{
    if (p1.first == p2.first)
    {
        return p1.second.size() > p2.second.size();
    }
    return p1.first > p2.first;
}
// CODE WRITTEN BY mr_krishna/krishna_6431
void solve()
{
    ll n;
    cin >> n;
    string str;
    cin >> str;
    str += '#';
    string pat = solveHelper(str);

    // bug(pat);

    vector<string> ans = solveHelper2(str, pat);
    // for (auto x : ans)
    // {
    //     cout << x << " ";
    // }
    // cout << endl;
    map<string, int> mp;
    for (auto x : ans)
    {
        mp[x]++;
    }
    vector<pair<int, string>> v;
    for (auto x : mp)
    {
        v.push_back({x.second, x.first});
    }
    sort(all(v), cmp);
    // for (auto x : v)
    // {
    //     cout << x.first << " " << x.second << " ";
    // }
    // cout << endl;
    if (v[0].first > 1)
    {
        cout << v[0].second.size() << endl;
    }
    else
    {
        cout << v[0].second.size() - 1 << endl;
    }
}

int main()
{
    fast;

    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    int t;
    cin >> t;
    int tc = 1;
    while (t--)
    {
        // cout << "Case #" << tc << ": ";
        tc++;
        solve();
    }
    return 0;
}