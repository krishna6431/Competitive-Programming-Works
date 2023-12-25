#include <bits/stdc++.h>
using namespace std;

int partition(int *arr, int start, int end)
{
    // inplace (cant take extra memory)
    int i = start - 1;
    int j = start;

    int pivot = arr[end];

    for (; j <= end - 1;)
    {

        if (arr[j] <= pivot)
        {
            // merge the smaller element in region 1
            i = i + 1;
            swap(arr[i], arr[j]);
        }
        // expand the larger region
        j = j + 1;
    }
    // placing pivot element at correct position
    swap(arr[i + 1], arr[end]);

    return i + 1;
}

void quickSort(int arr[], int start, int end)
{
    if (start >= end)
    {
        return;
    }
    // finding the partition point after placing pivot element at right index
    int p = partition(arr, start, end);
    // recursively sorting both the regions
    quickSort(arr, start, p - 1);
    quickSort(arr, p + 1, end);
}

int main()
{

    int arr[] = {7, 8, 9, 3, 4, 5, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}