//All Important Header Files
#include <bits/stdc++.h>
using namespace std;
//CODE WRITTEN BY KRISHNA_6431

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int tc;
    cin >> tc;
    int count = 1;
    while (tc--)
    {
        long long n;
        cin >> n;
        string stk;
        cin >> stk;
        int i = 2;
        for (int i = 2; i < stk.size(); i++)
        {
            if (stk[i] + stk[i - 1] + stk[i - 2] == 196)
            {
                stk[i - 2] = 'A';
                stk.erase(i - 1, 2);
                i = i - 2;
            }
            else if (stk[i] + stk[i - 1] + stk[i - 2] == 197)
            {
                stk[i - 2] = 'B';
                stk.erase(i - 1, 2);
                i = i - 2;
            }
        }

        if (stk.size() == 1)
        {
            cout << "Case #" << count << ": "
                 << "Y" << endl;
        }
        else
        {
            cout << "Case #" << count << ": "
                 << "N" << endl;
        }
        count++;
    }
    return 0;
}