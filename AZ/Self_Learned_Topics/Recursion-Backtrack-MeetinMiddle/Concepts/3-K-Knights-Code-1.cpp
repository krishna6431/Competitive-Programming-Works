// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

int n, k;
int ans;
int board[14][14];

int dx[] = {1, 2, 2, 1, -1, -2, -2, -1};
int dy[] = {2, 1, -1, -2, -2, -1, 1, 2};

bool check(int i, int j)
{
    if (board[i][j] == 1)
    {
        return 0;
    }
    for (int pos = 0; pos < 8; pos++)
    {
        int nx = i + dx[pos];
        int ny = j + dy[pos];
        if (nx >= 0 and nx < n and ny >= 0 and ny < n and board[nx][ny] == 1)
        {
            return 0;
        }
    }
    return 1;
}

// level = no of knights placed
void rec(int level)
{
    if (level == k)
    {
        ans++;
        // here board give the solution
        return;
    }

    // choice
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (check(i, j))
            {
                board[i][j] = 1;
                rec(level + 1);
                board[i][j] = 0;
            }
        }
    }
}

int main()
{
    cin >> n >> k;
    ans = 0;
    rec(0);
    // this is the important we have to divide it by factorial k coz we have to remove the duplicate orderings
    for (int i = 1; i <= k; i++)
    {
        ans /= i;
    }
    cout << ans << endl;
    return 0;
}