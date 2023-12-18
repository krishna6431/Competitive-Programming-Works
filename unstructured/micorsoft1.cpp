#include <bits/stdc++.h>
using namespace std;
struct Point
{
    int x, y;
};

struct Node
{
    Point pt;
    int dist;
};

bool isValid(int r, int c, int n, int m)
{
    return (r >= 0) && (r < n) && (c >= 0) && (c < m);
}

int dx[] = {-1, 0, 0, 1};
int dy[] = {0, -1, 1, 0};

int bfs(vector<vector<bool>> &grid, Point src, Point dest)
{
    if (!grid[src.x][src.y] || !grid[dest.x][dest.y])
        return -1;

    int n = grid.size();
    int m = grid[0].size();
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    visited[src.x][src.y] = true;
    queue<Node> q;

    Node s = {src, 0};
    q.push(s);
    while (!q.empty())
    {
        Node curr = q.front();
        Point pt = curr.pt;
        if (pt.x == dest.x && pt.y == dest.y)
            return curr.dist;
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int r = pt.x + dx[i];
            int c = pt.y + dy[i];

            if (isValid(r, c, n, m) && grid[r][c] && !visited[r][c])
            {
                visited[r][c] = true;
                Node Adjcell = {{r, c}, curr.dist + 1};
                q.push(Adjcell);
            }
        }
    }
    return -1;
}

int solution(int N, int M, int x1[], int y1[], int x2[], int y2[], int R)
{
    vector<vector<bool>> grid(N, vector<bool>(M, true));
    Point source = {0, 0};
    Point dest = {N - 1, M - 1};
    for (int i = 0; i < R; ++i)
    {
        for (int x = x1[i]; x <= x2[i]; ++x)
        {
            for (int y = y1[i]; y <= y2[i]; ++y)
            {
                if (x < N && y < M)
                {
                    grid[x][y] = false;
                }
            }
        }
    }

    return bfs(grid, source, dest);
}

int main()
{
    // int N = 6, M = 4;
    // int R = 3;
    // int x1[] = {2, 1, 4};
    // int y1[] = {0, 1, 3};
    // int x2[] = {2, 3, 4};
    // int y2[] = {2, 1, 3};
    // cout <<  solution(N, M, x1, y1, x2, y2, R) << endl;

    // int N = 5, M = 5;
    // int R = 2;
    // int x1[] = {0, 3};
    // int y1[] = {2, 0};
    // int x2[] = {2, 4};
    // int y2[] = {4, 1};
    // cout << solution(N, M, x1, y1, x2, y2, R) << endl;
    // return 0;

    int N = 7, M = 9;
    int R = 9;
    int x1[] = {0, 4, 1, 4, 1, 1, 5, 5, 3};
    int y1[] = {1, 1, 7, 7, 2, 5, 2, 5, 3};
    int x2[] = {2, 5, 2, 6, 1, 1, 5, 5, 3};
    int y2[] = {1, 1, 7, 7, 3, 6, 3, 6, 5};
    cout << solution(N, M, x1, y1, x2, y2, R) << endl;
    return 0;
}