// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

bool solve(string &str)
{
    int i = 0;
    int j = str.size() - 1;
    while (i <= j)
    {
        if (str[i] != str[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int main()
{
    string str;
    cin >> str;
    if (solve(str))
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
    return 0;
}