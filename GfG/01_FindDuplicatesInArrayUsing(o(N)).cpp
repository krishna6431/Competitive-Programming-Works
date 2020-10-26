// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
vector<int> duplicates(int arr[], int n);
int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        vector<int> ans = duplicates(a, n);
        for (int i : ans)
            cout << i << ' ';
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends

vector<int> duplicates(int arr[], int n)
{
    vector<int> res;
    vector<int> temp(n, 0);
    for (int i = 0; i < n; i++)
    {
        temp.at(arr[i])++;
    }

    for (int i = 0; i < n; i++)
    {
        if (temp.at(i) > 1)
        {
            res.push_back(i);
        }
    }
    if (res.empty())
    {
        res.push_back(-1);
        return res;
    }
    else
        return res;
}
