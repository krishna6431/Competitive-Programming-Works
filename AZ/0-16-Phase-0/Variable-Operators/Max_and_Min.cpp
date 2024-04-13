// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr;
    int temp;
    while (cin >> temp)
    {
        arr.push_back(temp);
    }
    cout << *min_element(arr.begin(), arr.end()) << " " << *max_element(arr.begin(), arr.end()) << endl;
    return 0;
}