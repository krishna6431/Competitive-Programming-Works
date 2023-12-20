#include <bits/stdc++.h>
using namespace std;

int merge(int *arr, int start, int end)
{
    int mid = (start + end) / 2;
    int i = start;
    int j = mid + 1;
    int k = start;

    int temp[1000];
    int count = 0;
    while (i <= mid && j <= end)
    {
        if (arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
            count += (mid - i + 1);
        }
    }

    while (i <= mid)
    {
        temp[k++] = arr[i++];
    }

    while (j <= end)
    {
        temp[k++] = arr[j++];
    }

    for (int i = start; i <= end; i++)
    {
        arr[i] = temp[i];
    }

    return count;
}

int inversionCount(int arr[], int start, int end)
{
    if (start >= end)
    {
        return 0;
    }

    int mid = (start + end) / 2;
    int x = inversionCount(arr, start, mid);
    int y = inversionCount(arr, mid + 1, end);
    int cross = merge(arr, start, end);
    return x + y + cross;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    cout << "Inversion Count: " << inversionCount(arr, 0, n - 1) << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}