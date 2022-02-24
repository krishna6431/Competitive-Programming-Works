#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[6][6];
    int max = INT_MIN;
    int sum = 0;
    int i, j, k;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            sum = arr[i + 1][j + 1];
            for (int k = 0; k < 3; k++)
            {
                sum += arr[i][j + k] + arr[i + 2][j + k];
            }
            if (sum > max)
            {
                max = sum;
            }
        }
    }
    cout << max << endl;
    return 0;
}
