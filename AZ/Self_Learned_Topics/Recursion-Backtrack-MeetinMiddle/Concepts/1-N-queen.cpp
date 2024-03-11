// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

int n;
int queen[10];

bool check(int row, int col)
{
    // check is it possible to place queen
    for (int pr = 0; pr < row; pr++)
    {
        int pc = queen[pr];
        // diagnal cut points ke liye dono ke slope ka ration jo hoga wo 1 ya -1 hoga
        // perpendicular/base should be 1
        if (pc == col or abs(row - pr) == abs(col - pc))
        {
            return false;
        }
    }
    return true;
}

// row no is level
// is recursion ka matlab hain 0 se level-1 tk kr liya h ab level se n tk explore krke laao
int rec(int level)
{
    // base case
    if (level == n)
    {
        return 1;
    }
    // recursive case
    int ans = 0;
    // go through all the columns
    for (int col = 0; col < n; col++)
    {
        if (check(level, col))
        {
            // move
            queen[level] = col;
            ans += rec(level + 1);
            queen[level] = -1;
        }
    }
    return ans;
}

void solve()
{
    cin >> n;
    memset(queen, -1, sizeof(queen));
    int ans = rec(0);
    cout << ans << endl;
}

int main()
{
    solve();
    return 0;
}