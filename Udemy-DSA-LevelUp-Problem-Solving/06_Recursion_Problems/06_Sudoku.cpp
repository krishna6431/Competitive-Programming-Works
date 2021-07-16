// All Important Header Files
#include <bits/stdc++.h>
//ALL IMPORTANT MACROS
#define pb push_back
#define mp make_pair
#define fr first
#define sc second
#define endl "\n"
#define deb(x) cout << x << endl;
#define display(start, end)           \
    for (int i = start; i < end; i++) \
        cout << i << " ";             \
    cout << endl;
#define MOD 1000000007
#define len(x) x.size()
#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))
#define all(v) v.begin(), v.end()
#define alla(a, n) a, a + n
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
//USING NAME SPACE
using namespace std;
//SOME TYPEDEF DECLARATION
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<vll> vvll;
typedef vector<string> vs;
// code is written by mr_krishna

//Problem Description
/*
Given a Partially filled suduko Matrix of 9x9,
Write a function to fill the matrix using sudoku rules
*/

/*
Sample Input:
2D Martix

Sample Output:
Solved 2D Matrix
*/

/*
Time Complexity: O(9^(n*n))
Space Complexity:
*/

bool isSafe(int mat[][9], int i, int j, int no, int n)
{
    //check for row and col
    for (int k = 0; k < n; k++)
    {
        if (mat[k][j] == no || mat[i][k] == no)
        {
            return false;
        }
    }

    //check for subgrid
    int sx = (i / 3) * 3;
    int sy = (j / 3) * 3;
    for (int x = sx; x < sx + 3; x++)
    {
        for (int y = sy; y < sy + 3; y++)
        {
            if (mat[x][y] == no)
            {
                return false;
            }
        }
    }
    return true;
}

bool solveSudoku(int mat[][9], int i, int j, int n)
{
    //base case
    if (i == n)
    {
        //print solution
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
        return true;
    }

    // recursive case
    if (j == n)
    {
        return solveSudoku(mat, i + 1, 0, n);
    }
    // skip prefilled cell
    if (mat[i][j] != 0)
    {
        return solveSudoku(mat, i, j + 1, n);
    }

    // cell to be filled
    //try out all posibilities
    for (int no = 1; no <= n; no++)
    {
        // whether it is safe to place the number
        if (isSafe(mat, i, j, no, n))
        {
            mat[i][j] = no;
            bool solveSubproblem = solveSudoku(mat, i, j + 1, n);
            if (solveSubproblem == true)
            {
                return true;
            }
        }
    }
    //if no option works
    mat[i][j] = 0;
    return false;
}

int main()
{
    fast;

    // #ifndef ONLINE_JUDGE
    //     freopen("./input.txt", "r", stdin);
    //     freopen("./output.txt", "w", stdout);
    // #endif
    int t;
    cin >> t;
    int tc = 1;
    while (t--)
    {
        cout << "Case #" << tc++ << ":" << endl;
        int n = 9;
        int mat[9][9];
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                cin >> mat[i][j];
            }
        }
        solveSudoku(mat, 0, 0, n);
    }
    return 0;
}
