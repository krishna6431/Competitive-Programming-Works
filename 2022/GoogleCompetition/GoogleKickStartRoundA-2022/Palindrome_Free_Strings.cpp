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

// CODE WRITTEN BY mr_krishna/krishna_6431

void solve()
{
    ll n;
    cin >> n;
    string str;
    cin >> str;
    if (n < 5)
    {
        cout << "POSSIBLE" << endl;
        return;
    }
    // bug(str);
    for (int i = 0; i < str.size() - 5; i++)
    {
        for (int j = i + 4; j < str.size(); j++)
        {
            int start = i;
            int end = j;

            if (str[start] == '?' && str[end] == '?')
            {
                str[start] = '0';
                str[end] = '1';
                start++;
                end--;
            }
            else if (str[start] == '?' && str[end] != '?')
            {
                if (str[end] == '0')
                {
                    str[start] = '1';
                }
                else
                {
                    str[start] = '0';
                }
                start++;
                end--;
            }
            else if (str[start] != '?' && str[end] == '?')
            {
                if (str[start] == '0')
                {
                    str[end] = '1';
                }
                else
                {
                    str[end] = '0';
                }
                start++;
                end--;
            }
            else
            {
                start++;
                end--;
            }

            if ((j-i+1) & 1)
            {
                int idx = (j-i+1) / 2;
                if (str[idx] == '?')
                {
                    str[idx] = '1';
                }
            }
            string temp = str.substr(i, j - i + 1);
            string revTemp = temp;
            //   cout << temp << endl;
            reverse(revTemp.begin(), revTemp.end());
            if (temp == revTemp)
            {
                cout << "IMPOSSIBLE" << endl;
                return;
            }
        }
    }
    cout << "POSSIBLE" << endl;
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
        solve();
    }
    return 0;
}
