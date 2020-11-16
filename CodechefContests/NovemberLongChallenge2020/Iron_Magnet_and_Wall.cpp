// All Important Header Files
#include <bits/stdc++.h>
//ALL IMPORTANT MACROS
#define pb push_back
#define mp make_pair
#define fr first
#define sc second
#define deb(x) cout << x << endl;
#define display(start, end) for (int i = start; i <= end; i++)
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
int main()
{
    fast;

    // #ifndef ONLINE_JUDGE
    //     freopen("../input.txt", "r", stdin);
    //     freopen("../output.txt", "w", stdout);
    // #endif
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        queue<int> mag, iro, block;

        int ans = 0;
        int p;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'M')
            {
                mag.push(i);
            }
            else if (s[i] == 'I')
            {
                iro.push(i);
            }
            else if (s[i] == 'X')
            {
                block.push(i);
            }
        }
        int mg = 0, ir = 0;
        int bl = 0;
        if (!block.empty())
        {
            bl = block.front();
        }
        mg = mag.front();
        ir = iro.front();
        while ((!mag.empty()) && (!iro.empty()))
        {
            if (bl < min(mg, ir) && !(block.empty()))
            {
                block.pop();
                if (!block.empty())
                {
                    bl = block.front();
                }
                continue;
            }

            else if (bl > min(mg, ir) && bl < max(mg, ir))
            {
                if (mg < bl)
                {
                    mag.pop();
                    if (!mag.empty())
                    {
                        mg = mag.front();
                    }
                    continue;
                }
                else if (ir < bl)
                {
                    iro.pop();
                    if (!iro.empty())
                    {
                        ir = iro.front();
                    }
                    continue;
                }
            }
            else
            {
                int sheet = 0;
                for (int i = min(mg, ir); i < max(mg, ir); i++)
                {
                    if (s[i] == ':')
                    {
                        sheet++;
                    }
                    else
                    {
                        continue;
                    }
                }
                p = k + 1 - abs(mg - ir) - sheet;
            }
            // cout << endl;

            if (p > 0)
            {
                ans++;
                // cout << "Ans: " << ans << endl;
                mag.pop();
                iro.pop();
                // cout << "Test Case : " << t + 1 << endl;
                // cout << "Block: " << bl << endl;
                // cout << "Power: " << p << " " << endl;
                // cout << mg << "---> " << ir << endl;
                mg = mag.front();
                ir = iro.front();
            }
            else
            {
                if (ir > mg)
                {
                    mag.pop();
                    if (!mag.empty())
                    {
                        mg = mag.front();
                        continue;
                    }
                    else
                    {
                        break;
                    }
                }
                else
                {
                    iro.pop();
                    if (!iro.empty())
                    {
                        ir = iro.front();
                        continue;
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
