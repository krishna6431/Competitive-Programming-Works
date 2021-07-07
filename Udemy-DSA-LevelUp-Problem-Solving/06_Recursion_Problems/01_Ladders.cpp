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
Given a ladder containing N steps, you can take a jump of 1,2 or 3 at each step.Find the number of ways to climb the ladder.
*/

/*
Sample Input:
N=4

Sample Output:
7
*/

/*
Time Complexity:O(MlogM+NlogM)
Space Complexity:O(1)
*/

int countWays(int n)
{
    //Base
    if (n < 0)
    {
        return 0;
    }
    if (n == 0)
    {
        return 1;
    }

    //recursive case
    return countWays(n - 1) + countWays(n - 2) + countWays(n - 3);
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
        cout << "No of Ways: " << countWays(n) << endl;
    }
    return 0;
}
