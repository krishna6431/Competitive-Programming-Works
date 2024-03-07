#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int countSpecialElements(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    int ans = 0;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < matrix[i].size(); ++j)
        {
            int element = matrix[i][j];
            int mini = *min_element(matrix[i].begin(), matrix[i].end());
            int maxi = *max_element(matrix[i].begin(), matrix[i].end());
            if (element == mini || element == maxi)
            {
                if (count(matrix[i].begin(), matrix[i].end(), element) > 1)
                {
                    return -1;
                }
                ans++;
            }
            else
            {
                vector<int> colm;
                for (int i = 0; i < n; ++i)
                {
                    colm.push_back(matrix[i][j]);
                }
                int mini = *min_element(colm.begin(), colm.end());
                int maxi = *max_element(colm.begin(), colm.end());
                if (element == mini || element == maxi)
                {
                    if (count(colm.begin(), colm.end(), element) > 1)
                    {
                        return -1;
                    }
                    ans++;
                }
            }
        }
    }

    return ans;
}

int main()
{
    vector<vector<int>> matrix = {{1, 3, 4}, {5, 2, 9}, {8, 7, 6}};
    int ans = countSpecialElements(matrix);
    cout << ans << endl;
    return 0;
}
