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
You have given a SORTED array containing duplicate elements and also a key with this , you have to find frequency of the key in the given array.
*/

/*
Sample Input:
0 0 0 0 1 1 1 2 2 3 3 3 3 3 4 4
3

Sample Output:
5
*/

/*
Time Complexity:O(logn)
Space Complexity:O(1)
*/

//function for calculating first occurence of the element
int lowerBound(vector<int> &arr, int key)
{
    int start = 0;
    int end = arr.size() - 1;
    int ans = -1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            ans = mid;
            mid = end - 1;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}

//function for calculating last occurence of the element
int upperBound(vector<int> &arr, int key)
{
    int start = 0;
    int end = arr.size() - 1;
    int ans = -1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
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
        int n;
        cin >> n;
        vector<int> arr;
        int temp;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            arr.push_back(temp);
        }
        int key;
        cin >> key;
        int firstOcc = lowerBound(arr, key);
        int lastOcc = upperBound(arr, key);
        cout << lastOcc - firstOcc + 1 << endl;
    }
    return 0;
}
