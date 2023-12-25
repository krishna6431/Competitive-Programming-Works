// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

template <typename T>
T rotated_search(vector<T> &arr, T key)
{
    T low = 0;
    T high = arr.size() - 1;
    while (low <= high)
    {
        T mid = low + (high - low) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[low] <= arr[mid])
        {
            if (key < arr[mid] and key >= arr[low])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else if (arr[high] >= arr[mid])
        {
            if (key > arr[mid] and key <= arr[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {4, 5, 6, 7, 1, 2, 3};
    cout << rotated_search(arr, 3) << endl;
    cout << rotated_search(arr, 7) << endl;
    return 0;
}