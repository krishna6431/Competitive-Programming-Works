#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int start, int end)
{
    int mid = (start + end) / 2;
    int i = start;
    int j = mid + 1;
    int k = start;

    // temporarily storing the elements
    int temp[1000];

    while (i <= mid && j <= end)
    {
        if (arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
        }
    }
    // filling leftout elements of any one of the arrays
    while (i <= mid)
    {
        temp[k++] = arr[i++];
    }
    while (j <= end)
    {
        temp[k++] = arr[j++];
    }
    // copy back all the sorted elements from temp array to original array
    for (int l = start; l <= end; l++)
    {
        arr[l] = temp[l];
    }
}

void mergeSort(int arr[], int start, int end)
{
    // base case when only one element lefts
    if (start >= end)
    {
        return;
    }

    int mid = (start + end) / 2;

    // recursively sorting array by dividing it into two halfs recursively
    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);

    // finally merging arrays;
    merge(arr, start, end);
}
int main()
{
    int arr[] = {5, 4, 3, 2, 1, 0};
    int n = sizeof(arr) / sizeof(int);
    mergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}