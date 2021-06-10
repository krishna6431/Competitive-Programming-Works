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
Along one side of a road there is a sequence of vacant plots of land.Each Plot has a different area(non - zero).So, the areas from a sequence A[1], A[2]... A[N].
You want to buy K acres of land to build a house.You want ot find all segments of contiguious plots(i.e.a subsection in the sequence) of whose sum is exactly K.
*/

/*
Sample Input:
Plots = {1, 3, 2, 1, 4, 1, 3, 2, 1, 1, 2}
K = 8

Sample Output:
2 5
4 6
5 9
*/

/*
Time Complexity:O(n)
Space Complexity:O(1)
*/

//function for finding plots of lands equal to
//two pointer approach
vector<pair<int, int>> optimizedHousing(vector<int> v, int k, int n)
{
    vector<pair<int, int>> ans;
    int sum = 0;
    int i = 0, j = 0;

    while (j < n)
    {
        sum += v[j];
        j++;
        while (sum > k and i < j)
        {
            sum -= v[i];
            i++;
        }
        if (sum == k)
        {
            // cout << i << j;
            ans.push_back({i, j - 1});
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
        cout << "Case #" << tc++ << ":" << endl;
        int n, k;
        cin >> n >> k;
        vector<int> input;
        int temp;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            input.push_back(temp);
        }
        vector<pair<int, int>> ans = optimizedHousing(input, k, n);
        for (auto x : ans)
        {
            cout << x.first << " " << x.second << endl;
        }
    }
    return 0;
}