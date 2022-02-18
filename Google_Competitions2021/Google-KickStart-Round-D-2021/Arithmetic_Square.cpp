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
// CODE WRITTEN BY KRISHNA_6431
int count(ll arr[][3])
{
    int ans = 0;

    if (arr[2][2] - arr[1][1] == arr[1][1] - arr[0][0])
    {
        ans++;
    }
    if (arr[2][0] - arr[1][1] == arr[1][1] - arr[0][2])
    {
        ans++;
    }
    if (arr[2][1] - arr[1][1] == arr[1][1] - arr[0][1])
    {
        ans++;
    }

    if (arr[1][2] - arr[1][1] == arr[1][1] - arr[1][0])
    {
        ans++;
    }

    return ans;
}
void solve()
{
    ll arr[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == 1 and j == 1)
            {
                arr[i][j] = 0;
            }
            else
            {
                cin >> arr[i][j];
            }
        }
    }
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << arr[i][j];
    //     }
    // }
    int res = 0;
    if (arr[2][0] - arr[1][0] == arr[1][0] - arr[0][0])
    {
        res++;
    }
    if (arr[2][2] - arr[1][2] == arr[1][2] - arr[0][2])
    {
        res++;
    }
    if (arr[0][2] - arr[0][1] == arr[0][1] - arr[0][0])
    {
        res++;
    }
    if (arr[2][2] - arr[2][1] == arr[2][1] - arr[2][0])
    {
        res++;
    }
    int temp = INT_MIN;
    arr[1][1] = (arr[0][0] + arr[2][2]) / 2;
    temp = max(temp, count(arr));
    arr[1][1] = (arr[0][2] + arr[2][0]) / 2;
    temp = max(temp, count(arr));
    arr[1][1] = (arr[0][1] + arr[2][1]) / 2;
    temp = max(temp, count(arr));
    arr[1][1] = (arr[1][0] + arr[1][2]) / 2;
    temp = max(temp, count(arr));

    cout << res + temp << endl;
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
