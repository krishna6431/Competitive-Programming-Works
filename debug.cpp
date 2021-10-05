#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 128;
    for (int i = 0; i < n; i++)
    {
        cout << "X: " << i << " ";
        int k = 0;
        int j = 1;
        int x = i;
        while ((k | j) <= x)
        {
            k = k | j;
            j++;
        }
        cout << j << endl;
    }
}