#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<int> filter(int n, vector<vector<int>> arr, vector<vector<int>> queries)
{
    int max_salary = 0;
    vector<int> salaries(n);
    for (int i = 0; i < n; ++i)
    {
        salaries[i] = arr[i][1];
        max_salary = max(max_salary, salaries[i]);
    }

    vector<vector<int>> pSum(max_salary + 1, vector<int>(n + 1, 0));

    for (int t = 0; t <= max_salary; ++t)
    {
        for (int i = 0; i < n; ++i)
        {
            pSum[t][i + 1] = pSum[t][i] + (salaries[i] > t ? 1 : 0);
        }
    }

    vector<int> ans;
    for (const auto &query : queries)
    {
        int l = query[0] - 1;
        int r = query[1];
        int x = query[2];
        int count = pSum[x][r] - pSum[x][l];
        ans.push_back(count);
    }

    return ans;
}

int main()
{
    int n, q;
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(2));
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i][0] >> arr[i][1];
    }

    cin >> q;
    vector<vector<int>> queries(q, vector<int>(3));
    for (int i = 0; i < q; ++i)
    {
        cin >> queries[i][0] >> queries[i][1] >> queries[i][2];
    }

    vector<int> ans = filter(n, arr, queries);
    for (int count : ans)
    {
        cout << count << " ";
    }
    cout << endl;

    return 0;
}

vector<int> filter(int N, const vector<vector<int>> &A, const vector<vector<int>> &queries)
{
    vector<int> ans;
    ans.reserve(queries.size());

    for (const auto &query : queries)
    {
        int l = query[0];
        int r = query[1];
        int x = query[2];
        int count = 0;

        for (int i = l - 1; i < r; ++i)
        {
            if (A[i][1] > x)
            {
                ++count;
            }
        }

        ans.push_back(count);
    }

    return ans;
}
