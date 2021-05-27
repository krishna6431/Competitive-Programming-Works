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

int highestMountain(vector<int> arr)
{
    int n = arr.size();
    int largest = 0;
    for (int i = 1; i <= n - 2;)
    {
        //check for a[i] is peak or not
        if (arr[i] > arr[i - 1] and arr[i] > arr[i + 1])
        {
            // do some work
            int count = 1;
            int j = i;
            //count backwards(left)
            while (j >= 1 and arr[j] > arr[j - 1])
            {
                j--;
                count++;
            }
            //count forwards(right)
            while (i <= n - 2 and arr[i] > arr[i + 1])
            {
                i++;
                count++;
            }
            largest = max(largest, count);
        }
        else
        {
            i++;
        }
    }
    return largest;
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
        vector<int> input(n);
        for (auto &x : input)
            cin >> x;
        auto res = highestMountain(input);
        cout << "Mountain Width is: " << res << endl;
    }

    return 0;
}
