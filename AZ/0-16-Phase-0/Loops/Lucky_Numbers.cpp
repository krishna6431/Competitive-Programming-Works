// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a, b;
    cin >> a >> b;
    bool overAll = false;
    for (int i = a; i <= b; i++)
    {
        string temp = to_string(i);
        bool flag = true;
        for (auto x : temp)
        {
            if (x != '4' and x != '7')
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            overAll = true;
            cout << i << " ";
        }
    }
    if (!overAll)
    {
        cout << -1 << endl;
    }
    return 0;
}