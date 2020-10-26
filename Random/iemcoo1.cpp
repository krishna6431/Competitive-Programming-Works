//All Important Header Files
#include <bits/stdc++.h>
#include <time.h>
using namespace std;
//ALL IMPORTANT MACROS
#define pb push_back
#define mp make_pair
#define fr first
#define sc second
#define MOD 1000000007
#define len(x) x.size()
#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))
#define all(v) v.begin(), v.end()
#define alla(a, n) a, a + n

//SOME TYPEDEF DECLARATION
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<vll> vvll;
typedef vector<string> vs;

//CODE WRITTEN BY KRISHNA_6431
int merge(int arr[], int temp[], int l, int m, int r)
{
    int i_c = 0;
    int i = l;
    int j = m;
    int k = l;
    while ((i <= m - 1) && (j <= r))
    {
        if (arr[i] <= arr[j])
            temp[k++] = arr[i++];
        else
        {
            temp[k++] = arr[j++];

            i_c = i_c + (m - i);
        }
    }
    while (i <= m - 1)
        temp[k++] = arr[i++];

    while (j <= r)
        temp[k++] = arr[j++];

    for (i = l; i <= r; i++)
        arr[i] = temp[i];

    return i_c;
}
int _mergeSort(int arr[], int temp[], int left, int right)
{
    int mid, inv_count = 0;
    if (right > left)
    {

        mid = (right + left) / 2;

        inv_count = _mergeSort(arr, temp, left, mid);
        inv_count += _mergeSort(arr, temp, mid + 1, right);
        inv_count += merge(arr, temp, left, mid + 1, right);
    }

    return inv_count;
}
int main()
{
    clock_t t_start = clock();
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;
        int arr[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        // int temp[n + 1];
        int temp_arr;
        int cost = 0;
        int swap = 0;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] != i)
            {
                temp_arr = arr[i];
                cost += 1000;
                swap++;
                int itr = arr[i] - 1;
                while (--itr != 1)
                {
                    arr[itr - 1] = arr[itr];
                }
            }
        }
        int avg = cost / swap;
        if (avg > 2000)
        {
            cout << "Too Much" << endl;
        }
        else
        {
            cout << avg << endl;
        }
    }
    printf("Execution Time: %.2f sec", (double)(clock() - t_start) / CLOCKS_PER_SEC);
    return 0;
}