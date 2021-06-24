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
Count Inversion Count
*/

/*
Sample Input:
10 5 2 0 7 6 4

Sample Output:
13
*/

/*
Time Complexity:O(nlogn)
Space Complexity:O(n)
*/
//brute force solution is findind all pair (tc = o(n^2))

//helper method
int crossInversion(vector<int> &array, int s, int e)
{
    //something happening wrong with this code
    int i = s;
    int m = (s + e) / 2;
    int j = m + 1;
    vector<int> temp;
    int count = 0;
    while (i <= m and j <= e)
    {
        if (array[i] < array[j])
        {
            temp.push_back(array[i]);
            i++;
        }
        else
        {
            count += m - i + 1;
            temp.push_back(array[j]);
            j++;
        }
    }
    //this loop add remaining elements from first array
    while (i <= m)
    {
        temp.push_back(array[i++]);
    }
    //this loop add remaining elements from second array
    while (j <= e)
    {
        temp.push_back(array[j++]);
    }
    //copy back all elements to original array
    int k = 0;
    for (int idx = s; idx <= e; idx++)
    {
        array[idx] = temp[k++];
    }
    return count;
}

// inversion count recursive function
int inversionCount(vector<int> &array, int s, int e)
{
    //base case
    if (s >= e)
    {
        return 0;
    }
    //rec case
    int mid = (s + e) / 2;
    int c1 = inversionCount(array, s, mid);
    int c2 = inversionCount(array, mid + 1, e);
    int ci = crossInversion(array, s, e);
    return c1 + c2 + ci;
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
        vector<int> arr;
        int temp;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            arr.push_back(temp);
        }
        cout << inversionCount(arr, 0, n - 1) << endl;
    }
    return 0;
}
