// All Important Header Files
#include <bits/stdc++.h>
//ALL IMPORTANT MACROS
#define pb push_back
#define mp make_pair
#define fr first
#define sc second
#define endl "\n"
#define deb(x) cout << x << endl;
#define display(start, end)           \
    for (int i = start; i < end; i++) \
        cout << i << " ";             \
    cout << endl;
#define MOD 1000000007
#define len(x) x.size()
#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))
#define all(v) v.begin(), v.end()
#define alla(a, n) a, a + n
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
//USING NAME SPACE
using namespace std;
//SOME TYPEDEF DECLARATION
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<vll> vvll;
typedef vector<string> vs;
// code is written by mr_krishna

void subsequence(string str, string out, vector<string> &ans)
{
    if (str.size() == 0)
    {
        ans.push_back(out);
        return;
    }
    char ch = str[0];
    string reduced_out = str.substr(1);

    //includes
    subsequence(reduced_out, out + ch, ans);

    //excludes
    subsequence(reduced_out, out, ans);
}

bool cmp(string s1, string s2)
{
    if (s1.size() == s2.size())
    {
        return s1 < s2;
    }
    else
    {
        return s1.size() < s2.size();
    }
}
int main()
{
    fast;

    // #ifndef ONLINE_JUDGE
    //     freopen("./input.txt", "r", stdin);
    //     freopen("./output.txt", "w", stdout);
    // #endif
    int t;
    cin >> t;
    int tc = 1;
    while (t--)
    {
        cout << "Case #" << tc++ << ":" << endl;
        string str;
        cin >> str;
        vector<string> ans;
        subsequence(str, "", ans);
        sort(all(ans), cmp);
        cout << "{ ";
        for (auto x : ans)
            cout
                << x << " ";
        cout << " }" << endl;
    }
    return 0;
}