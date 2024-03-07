#include <iostream>
#include <vector>
#include <string>

using namespace std;

const long long mod = 1e9 + 7;

long long countPaths(const vector<vector<char>> &grid, const string &S)
{
    long long N = grid.size();
    long long M = grid[0].size();
    long long K = S.length();
    vector<vector<vector<long long>>> dp(N, vector<vector<long long>>(M, vector<long long>(K + 1, 0)));

    for (long long i = 0; i < N; ++i)
    {
        for (long long j = 0; j < M; ++j)
        {
            if (grid[i][j] == S[0])
            {
                dp[i][j][1] = 1;
            }
        }
    }

    for (long long k = 2; k <= K; ++k)
    {
        for (long long i = 0; i < N; ++i)
        {
            for (long long j = 0; j < M; ++j)
            {
                if (grid[i][j] == S[k - 1])
                {
                    long long dx[] = {0, 1, 0, -1};
                    long long dy[] = {1, 0, -1, 0};

                    for (long long d = 0; d < 4; ++d)
                    {
                        long long x = i + dx[d];
                        long long y = j + dy[d];

                        if (x >= 0 && x < N && y >= 0 && y < M)
                        {
                            dp[i][j][k] += dp[x][y][k - 1];
                            dp[i][j][k] %= mod;
                        }
                    }
                }
            }
        }
    }

    long long ans = 0;
    for (long long i = 0; i < N; ++i)
    {
        for (long long j = 0; j < M; ++j)
        {
            ans += dp[i][j][K];
            ans %= mod;
        }
    }

    return ans;
}

long long solve(long long N, long long M, vector<vector<char>> &grid, long long Q, vector<string> &queries)
{
    long long ans = 0;
    for (long long i = 0; i < Q; i++)
    {
        long long count = countPaths(grid, queries[i]);
        ans += count;
    }
    return ans;
}

int main()
{
    long long n, m;
    cin >> n >> m;

    vector<vector<char>> grid(n, vector<char>(m));
    for (long long i = 0; i < n; i++)
    {
        for (long long j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }
    long long q;
    cin >> q;
    vector<string> queries(q);
    for (int i = 0; i < q; i++)
    {
        cin >> queries[i];
    }
    cout << solve(n, m, grid, q, queries) << endl;
    return 0;
}
