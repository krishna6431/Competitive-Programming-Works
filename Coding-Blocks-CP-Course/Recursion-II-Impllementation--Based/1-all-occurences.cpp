#include <bits/stdc++.h>
using namespace std;

int storeAllOccurences(int *arr, int i, int n, int key, int *out, int j)
{
    if (i == n)
    {
        return j;
    }

    if (arr[i] == key)
    {
        out[j] = i;
        return storeAllOccurences(arr, i + 1, n, key, out, j + 1);
    }
    return storeAllOccurences(arr, i + 1, n, key, out, j);
}

int main()
{
    int arr[] = {1, 2, 7, 3, 7, 5, 7, 8};
    int key = 7;
    int n = sizeof(arr) / sizeof(int);
    int output[1000];
    int count = storeAllOccurences(arr, 0, n, key, output, 0);
    for (int i = 0; i < count; i++)
    {
        cout << output[i] << " ";
    }
    cout << endl;
    return 0;
}