// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

int solve(string &str)
{
    int ans = 0;
    int j = str.size() - 1;
    while (j >= 0)
    {
        if (str[j] == '1')
        {
            ans += 2;
        }
        else
        {
            ans += 1;
        }
        j--;
    }
    return ans;
}
int main()
{
    string str;
    cin >> str;
    string str2;
    bool flag = false;
    for (int i = 0; i < str.size(); i++)
    {
        if (flag == false and str[i] == '1')
        {
            flag = true;
        }
        if (flag)
        {
            str2 += str[i];
        }
    }
    int ans = solve(str2);
    cout << ans - 1 << endl;
    return 0;
}