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

string extractStringAtKey(string str, int key)
{
    // string tokenizer
    char *s = strtok((char *)str.c_str(), " ");
    while (key > 1)
    {
        s = strtok(NULL, " ");
        key--;
    }
    return (string)s;
}

int convertToInt(string key)
{
    int ans = 0;
    int p = 1;
    for (int i = key.size() - 1; i >= 0; i--)
    {
        ans += (key[i] - '0') * p;
        p *= 10;
    }
    return ans;
}

bool lexicoCompare(pair<string, string> s1, pair<string, string> s2)
{
    string key1, key2;
    key1 = s1.second;
    key2 = s2.second;
    return key1 < key2;
}

bool numericCompare(pair<string, string> s1, pair<string, string> s2)
{
    string key1, key2;
    key1 = s1.second;
    key2 = s2.second;
    return convertToInt(key1) < convertToInt(key2);
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
        int n;
        cin >> n;
        cin.get(); // consumes the extra '\n';
        string str;
        vector<string> v;
        for (int i = 0; i < n; i++)
        {
            getline(cin, str);
            v.push_back(str);
        }
        int key;
        string reversal, ordering;
        cin >> key >> reversal >> ordering;

        //1. to extract tokens
        vector<pair<string, string>> vp;
        for (int i = 0; i < n; i++)
        {
            vp.push_back({v[i], extractStringAtKey(v[i], key)});
        }

        //2. Sorting
        if (ordering == "numeric")
        {
            sort(all(vp), numericCompare);
        }
        else
        {
            sort(all(vp), lexicoCompare);
        }

        //3.Reversal
        if (reversal == "true")
        {
            reverse(all(vp));
        }

        //4: Printing
        // for (int i = 0; i < vp.size(); i++)
        // {
        //     cout << vp[i].first << " " << vp[i].second << endl;
        // }
        for (auto x : vp)
            cout << x.first << endl;
    }
    return 0;
}