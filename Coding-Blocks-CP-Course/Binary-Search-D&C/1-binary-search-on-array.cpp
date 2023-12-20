// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

template <typename T>
T binary_search(vector<T> &arr, T key)
{
    T low = 0;
    T high = arr.size() - 1;
    while (low <= high)
    {
        T mid = low + (high - low) / 2;
        if (arr[mid] == key)
            return mid;
        else if (key > arr[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 6, 8};
    cout << binary_search(arr, 3) << endl;
    cout << binary_search(arr, 9) << endl;
    return 0;
}