// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

int ratInMaze(char arr[10][10], int sol[10][10], int i, int j, int n, int m)
{
    if (i == n - 1 and j == m - 1)
    {
        sol[i][j] = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << sol[i][j] << " ";
            }
            cout << endl;
        }
        cout << "\n\n";
        return true;
    }

    // rat is inside the grid
    if (i >= n or j >= m)
    {
        return false;
    }
    // block is inside the grid
    if (arr[i][j] == 'X')
    {
        return false;
    }

    sol[i][j] = 1;
    int rightSuccess = ratInMaze(arr, sol, i, j + 1, n, m);
    int downSuccess = ratInMaze(arr, sol, i + 1, j, n, m);

    // backtrack
    sol[i][j] = 0;

    if (rightSuccess or downSuccess)
    {
        return true;
    }
    return false;
}

int main()
{
    char arr[10][10] = {
        "0000",
        "00X0",
        "000X",
        "0X00",
    };
    int soln[10][10] = {0};
    ratInMaze(arr, soln, 0, 0, 4, 4);
    return 0;
}