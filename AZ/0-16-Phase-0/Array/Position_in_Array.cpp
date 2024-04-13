// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (auto &x : arr)
        {
            cin >> x;
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] < 10)
            {
                cout << "A[" << i << "] = " << arr[i] << endl;
            }
        }
    }
    return 0;
}