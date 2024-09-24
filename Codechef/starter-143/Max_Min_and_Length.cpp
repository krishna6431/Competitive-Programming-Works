#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long count_good_subsequences(vector<int> &A)
{
    int N = A.size();
    sort(A.begin(), A.end());
    long long result = 0;

    // Iterate over each possible length L starting from 2 up to N
    for (int L = 2; L <= N; ++L)
    {
        // Iterate over possible starting indices
        for (int left = 0; left < N; ++left)
        {
            // Binary search to find the rightmost index where A[right] - A[left] <= L - 1
            int right = upper_bound(A.begin(), A.end(), A[left] + L - 1) - A.begin() - 1;

            // Check if the found segment is valid
            if (right >= left + L - 1 && A[right] - A[left] == L - 1)
            {
                // Count all valid subsequences in this segment
                result += (right - left - (L - 1) + 1);
            }
        }
    }

    return result;
}

void solve()
{
    int T;
    cin >> T;
    vector<long long> results(T);

    for (int t = 0; t < T; ++t)
    {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; ++i)
        {
            cin >> A[i];
        }
        results[t] = count_good_subsequences(A);
    }

    for (long long result : results)
    {
        cout << result << endl;
    }
}

int main()
{
    solve();
    return 0;
}
