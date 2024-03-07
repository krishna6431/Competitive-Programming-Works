#include <bits/stdc++.h>
using namespace std;

int getDistinctPair(vector<int> &arr, long long target)
{
    int n = arr.size();
    sort(arr.begin(), arr.end());
    int i = 0;
    int j = n - 1;
    int ans = 0;

    while (i < j)
    {
        long long sum = arr[i] + arr[j];

        if (sum == target)
        {
            ans++;

            while (i < j && arr[i] == arr[i + 1])
                i++;
            while (i < j && arr[j] == arr[j - 1])
                j--;

            i++;
            j--;
        }
        else if (sum < target)
        {
            i++;
        }
        else
        {
            j--;
        }
    }

    return ans;
}

int main()
{
    vector<int> arr = {6, 6, 3, 9, 3, 5, 1};
    int target = 12;

    cout << getDistinctPair(arr, target) << endl;
    return 0;
}
