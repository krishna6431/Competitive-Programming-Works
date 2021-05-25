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

vector<vector<int>> findTriplet(vector<int> arr, int target)
{
    sort(arr.begin(), arr.end());
    vector<vector<int>> ans;
    int n = arr.size();
    for (int i = 0; i <= n - 3; i++)
    {
        int j = i + 1;
        int k = n - 1;
        while (j < k)
        {
            int currSum = arr[i];
            currSum += (arr[j] + arr[k]);
            if (currSum == target)
            {
                ans.push_back({arr[i], arr[j], arr[k]});
                j++;
                k--;
            }
            else if (currSum > target)
            {
                k--;
            }
            else
            {
                j++;
            }
        }
    }
    return ans;
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
        cout << "Case " << tc++ << ": " << endl;
        cout << "[" << endl;
        int n, sum;
        cin >> n >> sum;
        vector<int> ans(n);
        for (auto &x : ans)
            cin >> x;
        auto res = findTriplet(ans, sum);
        if (res.size() == 0)
        {
            cout << "Triplet Not Exist" << endl;
        }
        else
        {
            for (auto row : res)
            {
                cout << "[";
                for (auto triple : row)
                {
                    cout << triple << ",";
                }
                cout << "]" << endl;
            }
        }
        cout << "]" << endl;
    }
    return 0;
}
