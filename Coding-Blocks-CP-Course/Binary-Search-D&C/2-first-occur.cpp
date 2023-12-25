// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

template <typename T>
T first_occur(vector<T> &arr, T key)
{
    T low = 0;
    T high = arr.size() - 1;
    T ans = -1;
    while (low <= high)
    {
        T mid = low + (high - low) / 2;
        if (arr[mid] == key)
        {
            ans = mid;
            high = mid - 1;
        }

        else if (key > arr[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 3, 3, 3, 3, 4, 5, 6, 7, 7, 7, 9};
    cout << first_occur(arr, 3) << endl;
    cout << first_occur(arr, 7) << endl;
    return 0;
}