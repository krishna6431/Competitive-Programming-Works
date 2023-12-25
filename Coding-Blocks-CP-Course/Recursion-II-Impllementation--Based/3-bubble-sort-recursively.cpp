#include <bits/stdc++.h>
using namespace std;

// iterative + recursive code
void bubble_sort(int arr[], int n)
{
    if (n == 1)
    {
        return;
    }
    for (int j = 0; j < n - 1; j++)
    {
        if (arr[j] >= arr[j + 1])
        {
            swap(arr[j], arr[j + 1]);
        }
    }
    bubble_sort(arr, n - 1);
}

// solving complete recusive code
// we need to convert loop into recursive code (j variable)
// very tricky implementation
void bubble_sort_rec(int arr[], int j, int n)
{
    if (n == 1)
    {
        return;
    }

    // after end of each pass
    if (j == n - 1)
    {
        return bubble_sort_rec(arr, 0, n - 1);
    }

    if (arr[j] >= arr[j + 1])
    {
        swap(arr[j], arr[j + 1]);
    }
    // passes
    return bubble_sort_rec(arr, j + 1, n);
}

int main()
{
    int arr[] = {5, 4, 3, 1, 2};
    int n = 5;
    bubble_sort_rec(arr, 0, n);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}