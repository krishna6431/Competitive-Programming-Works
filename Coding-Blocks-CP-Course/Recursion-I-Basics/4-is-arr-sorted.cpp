#include <bits/stdc++.h>
using namespace std;

// funcion to check if array is sorted or not
bool isSorted(vector<int> &arr, int idx)
{
    if (idx == 1)
    {
        if (arr[idx] >= arr[idx - 1])
        {
            return true;
        }
    }
    if (arr[idx] >= arr[idx - 1])
    {
        return isSorted(arr, idx - 1);
    }
    return false;
}

int main()
{
    vector<int> arr = {1, 3, 3, 4, 5};
    if (isSorted(arr, 4))
    {
        cout << "Sorted" << endl;
    }
    else
    {
        cout << "Not sorted" << endl;
    }
    return 0;
}