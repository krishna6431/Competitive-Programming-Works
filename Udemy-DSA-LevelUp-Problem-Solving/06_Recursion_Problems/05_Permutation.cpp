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
Given a number N and a modern phone keypad. Find out all possible strings generated using that number.

2--> ABC
3--> DEF
4--> GHI
5--> JKL
6--> MNO
7--> PQRS
8--> TUV
9--> WXYZ
*/

/*
Sample Input:
23

Sample Output:
AD AE AF BD BE BF CD CE CF
*/

/*
Time Complexity:
Space Complexity:
*/

string keypad[] = {"", "", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"};

void printKeyBoardOutput(string input, string output, int i = 0)
{
    //base case
    if (input[i] == '\0')
    {
        cout << output << endl;
        return;
    }

    // rec case
    int current_digit = input[i] - '0';
    if (current_digit == 0 or current_digit == 1)
    {
        printKeyBoardOutput(input, output, i + 1);
    }

    //keypad
    for (int k = 0; k < keypad[current_digit].size(); k++)
    {
        printKeyBoardOutput(input, output + keypad[current_digit][k], i + 1);
    }
    return;
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
        string output;
        printKeyBoardOutput(input, output);
    }
    return 0;
}
