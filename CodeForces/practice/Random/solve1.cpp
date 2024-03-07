#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> mat;
vector<vector<int>> visited;
map<int, vector<pair<int, int>>> mp;
int n, m;
int ans = 0;
int ansElem = -1;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};
int nr = 0, nc = 0;

int largestArea(vector<int> &histo)
{
    stack<int> st;
    int maxA = 0;
    int n = histo.size();
    for (int i = 0; i <= n; i++)
    {
        while (!st.empty() && (i == n || histo[st.top()] >= histo[i]))
        {
            int height = histo[st.top()];
            st.pop();
            int width;
            if (st.empty())
                width = i;
            else
                width = i - st.top() - 1;
            maxA = max(maxA, width * height);
        }
        st.push(i);
    }
    return maxA;
}

int maxSubRectArea(vector<vector<int>> &mat, int n, int m)
{
    int maxArea = 0;
    vector<int> height(m, 0);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mat[i][j] == 1)
                height[j]++;
            else
                height[j] = 0;
        }
        int area = largestArea(height);
        maxArea = max(maxArea, area);
    }
    return maxArea;
}

void dfs(int i, int j, int elem, int x, int y)
{
    if (i < 0 or i >= n or j < 0 or j >= m or visited[i][j] or mat[i][j] != elem)
    {
        return;
    }
    visited[i][j] = 1;
    mp[mat[i][j]].push_back({i, j});
    nr = max(nr, i);
    nc = max(nc, j);
    for (int k = 0; k < 4; k++)
    {
        int newx = i + dx[k];
        int newy = j + dy[k];
        x = i + dx[k];
        y = j + dy[k];
        dfs(newx, newy, elem, x, y);
    }
}

int main()
{
    cin >> n >> m;
    mat.resize(n, vector<int>(m));
    visited.resize(n, vector<int>(m));
    mp.clear();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!visited[i][j])
            {
                nr = 0, nc = 0;
                mp[mat[i][j]] = {};
                dfs(i, j, mat[i][j], 0, 0);
                vector<vector<int>> submat(nr + 1, vector<int>(nc + 1, 0));
                int cnt = 0;
                for (auto x : mp[mat[i][j]])
                {
                    submat[x.first][x.second] = 1;
                }
                int area = maxSubRectArea(submat, nr + 1, nc + 1);
                if (area > ans)
                {
                    ans = area;
                    ansElem = mat[i][j];
                }
            }
        }
    }
    cout << "Maximum are of Submatrix is " << ans << " formed by element " << ansElem << endl;
    return 0;
}
