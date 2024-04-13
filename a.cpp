#include <bits/stdc++.h>
using namespace std;

long bioHazard(int n, vector<int> allergic, vector<int> poisonous)
{
    int m = allergic.size();
    vector<int> left(n + 1, 0);
    vector<int> right(n + 1, n + 1);
    for (int i = 0; i < m; i++)
    {
        int x = allergic[i];
        int y = poisonous[i];
        if (x < y)
            swap(x, y);
        left[x] = max(left[x], y);
        right[y] = min(right[y], x);
    }
    cout << "Left: " << endl;
    for (auto x : left)
    {
        cout << x << " ";
    }
    cout << endl;
    cout << "Right: " << endl;
    for (auto x : right)
    {
        cout << x << " ";
    }
    cout << endl;

    int l = 1;
    multiset<int> bound_right, bound_left;
    long ans = 0;
    for (int r = 1; r <= n; r++)
    {
        // current restriction daala
        bound_left.insert(left[r]);
        bound_right.insert(right[r]);

        // case
        while (l <= r)
        {
            auto iter = bound_left.end();
            iter--;
            if ((*iter) >= l)
            {
                bound_left.erase(bound_left.find(left[l]));
                bound_right.erase(bound_right.find(right[l]));
                l++;
                continue;
            }
            iter = bound_right.begin();
            if ((*iter) <= r)
            {
                bound_left.erase(bound_left.find(left[l]));
                bound_right.erase(bound_right.find(right[l]));
                l++;
                continue;
            }
            break;
        }
        ans += r - l + 1;
        cout << "r: " << r << " "
             << "l: " << l << " "
             << "ans: " << ans << endl;
        cout << "*****************************************" << endl;
    }
    return ans;
}

// long bioHazard(int n, vector<int> &allergic, vector<int> &poisonous)
// {

//     unordered_map<int, int> d;
//     for (int i = 0; i < allergic.size(); i++)
//     {
//         int a = min(allergic[i], poisonous[i]);
//         int b = max(allergic[i], poisonous[i]);
//         d[b] = max(d[b], a);
//     }

//     for (int i = 1; i <= n; i++)
//     {
//         d[i] = max(d[i], d[i - 1]);
//     }

//     long res = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         if (d[i] == 0)
//         {
//             res += i;
//         }
//         else
//         {
//             res += i - d[i];
//         }
//     }
//     return res;
// }

int main()
{
    vector<int> allergic = {2, 1, 3};
    vector<int> poisonous = {3, 3, 1};
    int n = 3;
    long result = bioHazard(n, allergic, poisonous);
    cout << result;
    return 0;
}

// 1 : yes 2 : yes 3 : yes 1 2 : yes 1 3 : no 2 3 : no 1 2 3 : no