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

// take not take varient

void rec(int level, int knight)
{
    if (level == n * n)
    {
        if (knight == 0)
        {
            ans++;
        }
        return;
    }

    int row = level / n;
    int col = level % n;

    // dont place
    rec(level + 1, knight);
    if (knight > 0 and check(row, col))
    {
        board[row][col] = 1;
        rec(level + 1, knight - 1);
        board[row][col] = 0;
    }
}

int main()
{
    cin >> n >> k;
    ans = 0;
    rec(0, k);
    cout << ans << endl;
    return 0;
}