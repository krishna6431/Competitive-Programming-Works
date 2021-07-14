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
Find all permutation of a string 
*/

/*
Sample Input:
ABC

Sample Output:
ABC
ACB
BAC
BCA
CBA
CAB
*/

/*
Time Complexity: O(n*n!)
Space Complexity:
*/

void permute(string str, int l, int r)
{
    // base case
    if (l == r)
    {
        cout << str << endl;
    }
    else
    {
        //permutation made
        for (int i = l; i <= r; i++)
        {
            // swap case
            swap(str[l], str[i]);
            // recursion
            permute(str, l + 1, r);
            //backtrack
            swap(str[l], str[i]);
        }
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
        string input;
        cin >> input;
        permute(input, 0, input.size() - 1);
    }
    return 0;
}
