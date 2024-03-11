// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

const int BoardSize = 4;
const int cellSize = 2;
int board[BoardSize][BoardSize];
int ans = 0;

/*
0 1 0 0
0 0 4 0
0 4 0 0
0 0 3 0
*/

bool check(int ch, int row, int col)
{
    // check for row
    for (int c = 0; c < BoardSize; c++)
    {
        if (c != col and board[row][c] == ch)
        {
            return false;
        }
    }

    // check for col
    for (int r = 0; r < BoardSize; r++)
    {
        if (r != row and board[r][col] == ch)
        {
            return false;
        }
    }

    // check for grid

    int srow = (row / cellSize) * cellSize;
    int scol = (col / cellSize) * cellSize;

    for (int dx = 0; dx < cellSize; dx++)
    {
        for (int dy = 0; dy < cellSize; dy++)
        {
            if (srow + dx == row and scol + dy == col)
            {
                continue;
            }
            if (board[srow + dx][scol + dy] == ch)
            {
                return false;
            }
        }
    }
    return true;
}

void rec(int row, int col)
{
    // base case
    if (col == BoardSize)
    {
        rec(row + 1, 0);
        return;
    }
    if (row == BoardSize)
    {
        ans++;
        for (int i = 0; i < BoardSize; i++)
        {
            for (int j = 0; j < BoardSize; j++)
            {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }
        return;
    }

    // recursive case
    if (board[row][col] == 0)
    {
        for (int ch = 1; ch <= BoardSize; ch++)
        {
            if (check(ch, row, col))
            {
                board[row][col] = ch;
                rec(row, col + 1);
                board[row][col] = 0;
            }
        }
    }
    else
    {
        if (check(board[row][col], row, col))
        {
            rec(row, col + 1);
        }
    }
}

int main()
{
    for (int i = 0; i < BoardSize; i++)
    {
        for (int j = 0; j < BoardSize; j++)
        {
            cin >> board[i][j];
        }
    }
    rec(0, 0);
    cout << ans << endl;
    return 0;
}