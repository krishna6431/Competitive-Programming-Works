// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str, str2;
        cin >> str >> str2;
        string ns = "";
        int i1 = 0, j1 = 0;
        bool flag = true;
        while (i1 < str.size() and j1 < str2.size())
        {
            if (flag)
            {
                ns += str[i1++];
                flag = false;
            }
            else
            {
                ns += str2[j1++];
                flag = true;
            }
        }
        while (i1 < str.size())
        {
            ns += str[i1++];
        }
        while (j1 < str2.size())
        {
            ns += str2[j1++];
        }
        cout << ns << endl;
    }
    return 0;
}