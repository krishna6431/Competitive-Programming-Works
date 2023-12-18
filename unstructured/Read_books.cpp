// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>

using namespace std;

vector<int> findChaptersToRead(const vector<int> &A, const vector<int> &B)
{
    int n = A.size();
    int m = B.size();

    vector<int> ans;
    int sum = 0;
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        sum += A[i];
        if (mp.find(sum) == mp.end())
            mp[sum] = i + 1;
        ;
    }

    for (int i = 0; i < m; i++)
    {
        int count = 0;
        int a = B[i];
        int s = sum;

        if (s <= a)
        {
            count = a / s;
            a = a - count * s;
            count = count * n;

            if (a == 0)
            {
                ans.push_back(count);
                continue;
            }
            auto temp = mp.lower_bound(a);

            if (temp == mp.end())
            {
                ans.push_back(-1);
            }
            else
            {
                count += (*temp).second;
                ans.push_back(count);
            }
        }
        else
        {
            auto temp = mp.lower_bound(a);
            if (temp == mp.end())
            {
                ans.push_back(-1);
            }
            else
            {
                ans.push_back((*temp).second);
            }
        }
    }

    return ans;
}

int main()
{
    vector<int> A = {1, 2, 1};  // Knowledge gained from each chapter
    vector<int> B = {10, 1, 2}; // Target knowledge for each index

    vector<int> result = findChaptersToRead(A, B);

    for (int i = 0; i < result.size(); ++i)
    {
        cout << result[i] << endl;
    }

    return 0;
}