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
Write a function to generate all possible n pairs of balanced parentheses '(' and ')'
*/

/*
Sample Input:
2

Sample Output:
()()
(())
*/

/*
Time Complexity:O(2^n)
Space Complexity:O(n)
*/

void generateBrackets(string output, int n, int open, int close, int i)
{
    //base case
    if (i == 2 * n)
    {
        cout << output << endl;
        return;
    }

    //place openening bracket
    if (open < n)
    {
        generateBrackets(output + '(', n, open + 1, close, i + 1);
    }

    //place closing bracket
    if (close < open)
    {
        generateBrackets(output + ')', n, open, close + 1, i + 1);
    }
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
        string output;
        int n;
        cin >> n;
        generateBrackets(output, n, 0, 0, 0);
    }
    return 0;
}
