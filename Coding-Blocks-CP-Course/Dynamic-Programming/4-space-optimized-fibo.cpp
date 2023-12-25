// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

// time complexity : O(N);
// space complexity : O(1);

// there is another technique called matrix exponentiation that we can solved using O(logN), we will solve it later

int main()
{
    int n;
    cin >> n;
    int prev_prev = 0;
    int prev = 1;
    int curr;
    // recursion converted to iteration
    for (int i = 2; i <= n; i++)
    {
        curr = prev + prev_prev;
        prev_prev = prev;
        prev = curr;
    }
    // final output
    cout << curr << endl;
    return 0;
}