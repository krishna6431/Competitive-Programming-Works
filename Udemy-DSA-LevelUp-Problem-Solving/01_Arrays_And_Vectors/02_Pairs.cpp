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

vector<int> isPair(vector<int> arr, int target)
{
    vector<int> ans(2);
    unordered_set<int> ne_kr;
    for (int i = 0; i < arr.size(); i++)
    {
        int x = target - arr[i];
        if (ne_kr.find(x) != ne_kr.end())
        {
            ans[0] = x;
            ans[1] = arr[i];
            // cout << ans[0] << " " << ans[1] << endl;
            return ans;
        }
        ne_kr.insert(arr[i]);
    }
    return {};
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
    while (t--)
    {
        int n, sum;
        cin >> n >> sum;
        vector<int> ans(n);
        for (auto &x : ans)
            cin >> x;
        auto res = isPair(ans, sum);
        if (res.size() == 0)
        {
            cout << "Pair Not Exist" << endl;
        }
        else
        {
            cout << res[0] << " " << res[1] << endl;
        }
    }
    return 0;
}
