// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

const int BoardSize = 4;
const int cellSize = 2;
int board[BoardSize][BoardSize];
int ans = 0;

// bitmask setups
int takenRow[BoardSize];
int takenCol[BoardSize];
int takenGrid[BoardSize][BoardSize];
int log2arr[100100];
/*
0 1 0 0
0 0 4 0
0 4 0 0
0 0 3 0
*/

int getChoices(int row, int col)
{
    int taken = takenRow[row] | takenCol[col] | takenGrid[row / cellSize][col / cellSize];
    int notTaken = ((1 << (BoardSize + 1)) - 1) ^ taken;
    // int notTaken2 = ((1 << (BoardSize+1)-1) & (~taken));
    if (notTaken & 1)
    {
        notTaken ^= 1;
    }
    return notTaken;
}

void makeMove(int ch, int row, int col)
{
    board[row][col] = ch;
    takenRow[row] ^= (1 << ch);
    takenCol[col] ^= (1 << ch);
    takenGrid[row / cellSize][col / cellSize] ^= (1 << ch);
}

void revertMove(int ch, int row, int col)
{
    board[row][col] = 0;
    takenRow[row] ^= (1 << ch);
    takenCol[col] ^= (1 << ch);
    takenGrid[row / cellSize][col / cellSize] ^= (1 << ch);
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
        int chmask = getChoices(row, col);
        // 110100
        // 110000
        // 000100

        while (chmask)
        {
            // get last 1
            int last1 = chmask ^ (chmask & (chmask - 1));
            // find position of lastone
            int last1Pos = log2arr[last1];
            // use that as a valid move
            makeMove(last1Pos, row, col);
            rec(row, col + 1);
            // remove last 1
            revertMove(last1Pos, row, col);
            chmask = chmask & (chmask - 1);
        }
    }
    else
    {
        // prefilled
        rec(row, col + 1);
    }
}

int main()
{
    for (int i = 0; i <= 9; i++)
    {
        log2arr[1 << i] = i;
    }
    for (int i = 0; i < BoardSize; i++)
    {
        for (int j = 0; j < BoardSize; j++)
        {
            int ch;
            cin >> ch;
            makeMove(ch, i, j);
        }
    }
    rec(0, 0);
    cout << ans << endl;
    return 0;
}