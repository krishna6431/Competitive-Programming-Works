#include <bits/stdc++.h>

using namespace std;

pair<int, int> searchChar(const vector<string> &grid, char c)
{
    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[0].size(); j++)
        {
            if (grid[i][j] == c)
            {
                return make_pair(i, j);
            }
        }
    }
    return make_pair(0, 0);
}

int count(const vector<string> &grid, char c)
{
    int count = 0;
    for (const auto &row : grid)
    {
        for (char ch : row)
        {
            if (ch == c)
            {
                count++;
            }
        }
    }
    return count;
}

int visitBoard(const vector<string> &grid, pair<int, int> curr, pair<int, int> endLoc, vector<vector<int>> &visited, int remainingFood, int currentSteps);

int visitIfFeasible(const vector<string> &grid, pair<int, int> curr, pair<int, int> endLoc, vector<vector<int>> &visited, int remainingFood, int currentSteps)
{
    int rows = grid.size();
    int cols = grid[0].size();

    if (curr.first < 0 || curr.first >= rows || curr.second < 0 || curr.second >= cols)
    {
        return -1;
    }

    return visitBoard(grid, curr, endLoc, visited, remainingFood, currentSteps);
}

int visitBoard(const vector<string> &grid, pair<int, int> curr, pair<int, int> endLoc, vector<vector<int>> &visited, int remainingFood, int currentSteps)
{
    int rows = grid.size();
    int cols = grid[0].size();

    if (curr == endLoc)
    {
        return (remainingFood == 0) ? currentSteps : -1;
    }

    if (visited[curr.first][curr.second])
    {
        return -1;
    }

    visited[curr.first][curr.second] = 1;

    if (grid[curr.first][curr.second] == 'F')
    {
        remainingFood -= 1;
    }

    currentSteps += 1;

    int currentCost = -1;

    vector<pair<int, int>> moves = {{1, 0}, {-1, 0}, {0, -1}, {0, 1}};

    for (const auto &move : moves)
    {
        pair<int, int> newLoc = {curr.first + move.first, curr.second + move.second};
        int subCost = visitIfFeasible(grid, newLoc, endLoc, visited, remainingFood, currentSteps);

        if (subCost > 0 && (currentCost == -1 || currentCost > subCost))
        {
            currentCost = subCost;
        }
    }

    visited[curr.first][curr.second] = 0;

    return currentCost;
}

string SearchingChallenge(const vector<string> &grid)
{
    string token = "x6iv87gldc5X6IV87GLDC5";
    set<char> st;
    for (auto x : token)
    {
        st.insert(x);
    }
    pair<int, int> startLoc = searchChar(grid, 'C');
    pair<int, int> endLoc = searchChar(grid, 'H');
    int foodCount = count(grid, 'F');
    vector<vector<int>> visited(4, vector<int>(4, 0));

    int cost = visitBoard(grid, startLoc, endLoc, visited, foodCount, 0);
    string costt = to_string(cost);
    string ans = "";
    for (int i = 0; i < costt.size(); i++)
    {
        if (st.find(costt[i]) != st.end())
        {
            continue;
        }
        else
        {
            ans += costt[i];
        }
    }
    cout << ans << endl;
    return ans;
}

int main()
{
    vector<string> A = {"OOOO", "OOFF", "OCHO", "OFOO"};
    cout << SearchingChallenge(A) << endl;

    vector<string> B = {"FOOO", "OCOH", "OFOF", "OFOO"};
    cout << SearchingChallenge(B) << endl;

    return 0;
}
