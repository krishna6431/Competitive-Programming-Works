vector<int> p1, p2;
int maxi = 0;
int solve(vector<vector<int>> &arr, int N)
{
    int mis, mas, mid, mad;
    mis = arr[0][0] + arr[0][1];
    mas = arr[0][0] + arr[0][1];
    mid = arr[0][0] - arr[0][1];
    mad = arr[0][0] - arr[0][1];
    for (int i = 1; i < N; i++)
    {
        int sum = arr[i][0] + arr[i][1];
        int diff = arr[i][0] - arr[i][1];
        if (sum < mis)
        {
            mis = sum;
            p1 = arr[i];
        }

        else if (sum > mas)
        {

            mas = sum;
            p2 = arr[i];
        }
        if (diff < mid)
        {
            p1 = arr[i];
            mid = diff;
        }

        else if (diff > mad)
        {
            p2 = arr[i];
            mad = diff;
        }
    }

    int ans = max(mas - mis, mad - mid);
    maxi = ans;
    return ans;
}

class Solution
{
public:
    int minimumDistance(vector<vector<int>> &points)
    {
        solve(points, points.size());
        vector<pair<int, int>> a;
        vector<pair<int, int>> b;
        for (int i = 0; i < points.size(); i++)
        {
            if (points[i][0] == p1[0] and points[i][1] == p1[1])
            {
                continue;
            }
            a.push_back(points[i]);
        }
        for (int i = 0; i < points.size(); i++)
        {
            if (points[i][0] == p2[0] and points[i][1] == p2[1])
            {
                continue;
            }
            b.push_back(points[i]);
        }
        int ans1 = solve(a, a.size());
        int ans2 = solve(b, b.size());
        int ans = min(ans1, ans2);
        return ans;
    }
};