// code is written by krishna_6431/mr_krishna

#include <bits/stdc++.h>
using namespace std;

struct Result
{
    Result() : output1(){};
    int output1[100];
};

struct Result filterThree(int input1[])
{
    struct Result ans;
    int idx = 0;
    size_t sz = *(&input1 + 1) - input1;
    for (int i = 0; i < sz; i++)
    {
        if (input1[i] % 3 != 0)
        {
            ans.output1[idx++] = input1[i];
        }
    }
    return ans;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    struct Result ans = filterThree(arr);
    for (int i = 0; i < 100; i++)
    {
        cout << ans.output1[i] << endl;
    }
    cout << endl;
}