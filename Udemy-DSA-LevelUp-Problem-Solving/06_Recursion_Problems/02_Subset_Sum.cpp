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

//Problem Description
/*
Given a set of non-negative integers, and a value sum, determine of there is a subset of the given set with sum equal to given sum.
*/

/*
Sample Input:
arr = [10,12,15,6,19,20]
sum = 16

Sample Output:
YES
*/

/*
Time Complexity:O(2^n)
Space Complexity:O(n)
*/

int countSubsets(vector<int> arr, int n, int i, int sum)
{
    //Base
    if (i == n)
    {
        if (sum == 0)
        {
            return 1;
        }
        return 0;
    }

    //recursive case
    int inc = countSubsets(arr, n, i + 1, sum - arr[i]); //include case
    int exc = countSubsets(arr, n, i + 1, sum);          //exclude case

    return inc + exc;
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
        vector<int> in(n);
        int sum;
        cin >> sum;
        for (int i = 0; i < n; i++)
        {
            cin >> in[i];
        }
        cout << countSubsets(in, n, 0, sum) << endl;
    }
    return 0;
}
