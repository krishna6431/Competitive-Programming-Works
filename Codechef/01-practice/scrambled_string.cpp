scramble string : -int dp[55][55][55][55];
int solve(int i1, int j1, int i2, int j2, const string A, const string B)
{
    if (i1 == j1)
    {
        return i2 == j2 && A[i1] == B[i2];
    }

    if (dp[i1][j1][i2][j2] != -1)
        return dp[i1][j1][i2][j2];

    int ans = 0;

    for (int k = i1; k < j1; k++)
    {
        ans |= solve(i1, k, i2, i2 + (k - i1), A, B) & solve(k + 1, j1, i2 + (k - i1) + 1, j2, A, B); // No swap;
        ans |= solve(i1, k, j2 - (k - i1), j2, A, B) & solve(k + 1, j1, i2, j2 - (k - i1) - 1, A, B); // Swap;
    }

    return dp[i1][j1][i2][j2] = ans;
}
int Solution::isScramble(const string A, const string B)
{
    memset(dp, -1, sizeof(dp));

    int n = A.size();

    return solve(0, n - 1, 0, n - 1, A, B);
}