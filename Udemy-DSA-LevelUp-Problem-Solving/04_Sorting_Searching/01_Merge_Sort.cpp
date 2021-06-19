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
Implementing Merge Sort 
*/

/*
Sample Input:
8 9 7 6 5 4

Sample Output:
4 5 6 7 8 9
*/

/*
Time Complexity:O(nlogn)
Space Complexity:O(n)
*/

//helper method
void merge(vector<int> &array, int s, int e)
{
    int i = s;
    int m = (s + e) / 2;
    int j = m + 1;
    vector<int> temp;
    while (i <= m and j <= e)
    {
        if (array[i] < array[j])
        {
            temp.push_back(array[i]);
            i++;
        }
        else
        {
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
}

//Sorting Method
void mergeSort(vector<int> &array, int s, int e)
{
    //base case
    if (s >= e)
    {
        return;
    }
    //rec case
    int mid = (s + e) / 2;
    mergeSort(array, s, mid);
    mergeSort(array, mid + 1, e);
    return merge(array, s, e);
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
        merge(arr, 0, n - 1);
        for (auto x : arr)
            cout << x << " ";
        cout << endl;
    }
    return 0;
}