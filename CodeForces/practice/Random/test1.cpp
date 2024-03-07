// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> arr, int n)
{
    int ans = 1e9;
    for (int i = 1; i < n - 1; i++)
    {
        if (arr[i] > arr[i - 1] and arr[i] > arr[i + 1])
        {
            ans = min(ans, arr[i]);
        }
    }
    if (ans == 1e9)
        return -1;
    return ans;
}
int main()
{
    int ans = solve({5, 1, 3, 2, 8, 7}, 6);
    cout << ans << endl;
    return 0;
}