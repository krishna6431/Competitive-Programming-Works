#include <bits/stdc++.h>
using namespace std;

// generalized solution for k jump
int ladderProblem(int n, int k)
{
    if (n == 0)
    {
        return 1;
    }
    if (n < 0)
    {
        return 0;
    }

    int ans = 0;

    for (int i = 1; i <= k; i++)
    {
        ans += ladderProblem(n - i, k);
    }
    return ans;
}

int main()
{
    // no of ways to reach n;
    int n, k;
    cin >> n >> k;
    cout << ladderProblem(n, k) << endl;
    return 0;
}