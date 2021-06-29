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
You Have given an integer N and another integer P. Your task is to find a square root of the Integer N till P decimal Place
*/

/*
Sample Input:
10 3

Sample Output:
3.162
*/

/*
Time Complexity:O(logn)
Space Complexity:O(1)
*/

float squareRoot(int n, int p)
{
    //BinarySearch(for integer part)
    int start = 1;
    int end = n;
    int mid = (start + end) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (mid * mid == n)
        {
            return mid;
        }
        else if (mid * mid > n)
        {
            end = mid - 1;
        }
        else
        {
            ans = mid;
            start = mid + 1;
        }
    }

    //Linear Search for Decimal Part;
    float inc = 0.1;
    for (int place = 1; place <= p; place++)
    {
        while (mid * mid <= n)
        {
            ans += inc;
        }

        //one step backtrack(3.17 square is greater than 10 thatwhy we out of loop and we need to decrement by one inc)
        ans -= inc;
        inc = inc / 10.0;
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
        cout << "Case #" << tc++ << ":" << endl;
        int n;
        cin >> n;
        int p;
        cin >> p;
        cout << squareRoot(n, p) << endl;
    }
    return 0;
}
