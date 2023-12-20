// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

const int M = 1000000007;
void add(int &x, int y)
{
    if ((x += y) >= M)
    {
        x -= M;
    }
}
int solution(const vector<vector<int>> &a)
{
    const int n = a.size(), dx[] = {-1, 0, 1, 0}, dy[] = {0, 1, 0, -1};
    vector<int> have(1000006);
    int m = 0, r = 0;
    for (int i = 0, c = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (a[i][j] < 0)
            {
                add(r, M - 1);
                continue;
            }
            m = max(m, a[i][j]);
            if (have[a[i][j]])
            {
                continue;
            }
            queue<pair<int, int>> q;
            q.push({i, j});
            for (have[a[i][j]] = ++c; !q.empty();)
            {
                const int x = q.front().first, y = q.front().second;
                q.pop();
                for (int d = 0; d < 4; ++d)
                {
                    const int xx = x + dx[d], yy = y + dy[d];
                    if (xx >= 0 && xx < n && yy >= 0 && yy < n && a[xx][yy] >= 0 && have[a[xx][yy]] == 0)
                    {
                        q.push({xx, yy});
                        have[a[xx][yy]] = c;
                    }
                }
            }
        }
    }
    for (int i = 1; i <= m; ++i)
    {
        if (have[i] == 0)
        {
            continue;
        }
        for (int j = i; j <= m; j += i)
        {
            if (have[j] && have[j] != have[i])
            {
                add(r, j);
            }
        }
    }
    return r;
}
int main()
{
    cout << solution(
                {{1, 3, -1, 5},
                 {-1, -1, -1, -1},
                 {2, 6, -1, 10},
                 {8, 7, -1, 11}})
         << endl;
    return 0;
}