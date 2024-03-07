// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '?')
        {
            i++;
            for (int z = i; z < n; z++)
            {
                if (s[z] == '=')
                {
                    cout << ": ";
                    continue;
                }
                if (s[z] == '&')
                {
                    cout << endl;
                    continue;
                }
                cout << s[z];
            }
            break;
        }
    }
    return 0;
}