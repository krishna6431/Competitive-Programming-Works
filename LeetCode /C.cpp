#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int sz = 502, mod = 1e9 + 7;
std::vector<int> v, pre;
int n, x, y;
int dp[sz][sz];
int pre1[sz * sz * 4];
int solve(int x1, int y1)
{
    int sum = x - x1 + y - y1;
    int id = pre1[sum];
    if (sum == 0)
        id = -1;
    if (id >= n - 1)
        return 1;
    int &ans = dp[x1][y1];
    if (~ans)
        return ans;
    ans = 0;
    if (v[id + 1] <= x1)
        ans |= solve(x1 - v[id + 1], y1);
    if (v[id + 1] <= y1)
        ans |= solve(x1, y1 - v[id + 1]);

    return ans;
}
int solution(int H[], int N, int X, int Y)
{
    sort(H, H + N);
    v.resize(N);
    pre.resize(N);
    for (int i = 0; i < N; i++)
    {
        v[i] = H[i];
        pre[i] = v[i];
        if (i)
            pre[i] += pre[i - 1];
        pre1[pre[i]] = i;
    }
    int ans = 0;
    int lo = 1, hi = N;
    while (lo <= hi)
    {
        int mi = (lo + hi) / 2;
        n = mi;
        x = X;
        y = Y;
        memset(dp, -1, sizeof(dp));
        if (solve(x, y))
        {
            ans = mi;
            lo = mi + 1;
        }
        else
            hi = mi - 1;
    }
    return ans;
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int arr[] = {5, 5, 4, 6};
    cout << solution(arr, 4, 8, 8) << "\n";
    return 0;
}