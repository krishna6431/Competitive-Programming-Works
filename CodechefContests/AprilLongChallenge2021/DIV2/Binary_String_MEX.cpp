// All Important Header Files
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
// CODE WRITTEN BY KRISHNA
//code for checking subsequences
bool isSubsequence(string seq, string arr)
{
    ull seq_idx = 0;
    for (auto itr : arr)
    {
        if (seq_idx == seq.size())
        {
            break;
        }
        if (seq[seq_idx] == itr)
        {
            seq_idx++;
        }
    }
    return seq_idx == seq.size();
}
string dec_to_bin(ull n)
{
    string ans = bitset<64>(n).to_string();
    const auto l = ans.find('1');

    if (l != string::npos)
    {
        return ans.substr(l);
    }

    return "0";
}
ull cbod(string s)
{
    ull ans = 0;
    ull mul = 1;
    for (ll i = s.size() - 1; i >= 0; i--)
    {
        int t;
        if (s[i] == '1')
        {
            t = 1;
        }
        else
        {
            t = 0;
        }
        ans += t * mul;
        mul *= 2;
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
    while (t--)
    {
        string s;
        cin >> s;
        // cout << "Size: " << s.size() << endl;
        string ans;
        ull n_val = cbod(s);
        // cout << n_val << endl;
        // cout << "N value: " << n_val << endl;
        for (ll i = 0; i <= n_val + 1; i++)
        {
            // string s1 = dec_to_bin(i);
            // if (!(isSubsequence(s1, s)))
            // {
            //     ans = s1;
            //     break;
            // }
            // else
            // {
            //     continue;
            // }
            string s1;
            if(!issi)
            for(int i =0 ; i < n ; i++){
                cout << "India Indaia"
            }
        }

        cout << ans << endl;
    }
    return 0;
}