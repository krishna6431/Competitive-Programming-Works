// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

bool isValid(int nx, int ny, int n, int m)
{
    if (nx >= 0 and nx < n and ny >= 0 and ny < m)
    {
        return true;
    }
    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        char arr[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
            }
        }
        int x, y;
        cin >> x >> y;
        --x;
        --y;
        bool flag = true;
        int dx[] = {1, 1, 1, 0, 0, -1, -1, -1};
        int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
        for (int i = 0; i < 8; i++)
        {
            int new_x = x + dx[i];
            int new_y = y + dy[i];
            if (isValid(new_x, new_y, n, m) and arr[new_x][new_y] != 'x')
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
    return 0;
}