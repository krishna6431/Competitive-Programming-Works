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
Given two strings, one big string and one small string, find the 'smallest window' in the big string
that contains all characters of the small string.
--> Window can have additinal chracters than required.
--> If small string has duplicates, then those duplicates must be present with same or higher count in window
*/

/*
Sample Input:
hello_world
lol

Sample Output:
llo
*/

/*
Time Complexity:O(n)
Space Complexity:O(n)
*/

// function for finding unique window
string uniqueWindow(string input)
{
    int i = 0, j = 0;
    int window_len = 0;
    int max_window_len = 0;
    int start_window = -1;
    unordered_map<char, int> umap;
    while (j < input.size())
    {
        char ch = input[j];
        // if its inside hashamap anf its idx >= start of window
        if (umap.count(ch) and umap[ch] >= i)
        {
            i = umap[ch] + 1;
            window_len = j - i; //updated remaining window
        }

        //update last occurance
        umap[ch] = j;
        window_len++;
        j++;

        //update max_window_len at everytime
        if (window_len > max_window_len)
        {
            max_window_len = window_len;
            start_window = i;
        }
    }
    return input.substr(start_window, max_window_len);
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
        cout << uniqueWindow(input) << endl;
    }
    return 0;
}