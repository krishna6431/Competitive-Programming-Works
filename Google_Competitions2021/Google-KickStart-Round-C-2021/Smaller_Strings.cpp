All Important Header Files
#include <bits/stdc++.h>
//ALL IMPORTANT MACROS
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
// CODE WRITTEN BY KRISHNA_6431
void gen_string(char set[], string prefix, int n, int k, vector<string> &precompute)
{
    if (k == 0)
    {
        precompute.pb(prefix);
        return;
    }
    for (int i = 0; i < n; i++)
    {
        string n_ew;
        n_ew = prefix + set[i];
        gen_string(set, n_ew, n, k - 1, precompute);
    }
}
bool check_palindrome(string str, int s, int e)
{
    if (s > e)
    {
        return true;
    }
    if (str[s] == str[e])
    {
        return check_palindrome(str, s + 1, e - 1);
    }
    else
    {
        return false;
    }
}
int solve()
{
    vector<string> precompute;
    int n, k;
    cin >> n >> k;
    string str;
    cin >> str;
    char set[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char set_test[k];
    for (int i = 0; i < k; i++)
    {
        set_test[i] = set[i];
    }
    gen_string(set_test, "", k, n, precompute);
    int ans = 0;
    vector<string> final;
    // cout << " { ";
    for (auto x : precompute)

    {
        // cout << x << " ";
        if (x.compare(str) < 0)
        {
            final.pb(x);
        }
    }
    // cout << " }";
    for (auto x : final)
    {
        // cout << x << " ";
        if (check_palindrome(x, 0, n - 1))
        {
            ans++;
            // cout << x << " ";
        }
    }
    return ans;
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
        cout << "Case #" << tc << ": ";
        tc++;
        int a = solve();
        cout << a << endl;
    }
    return 0;
}

