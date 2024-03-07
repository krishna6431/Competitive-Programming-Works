// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int score = 0;
    for (int i = 0; i < n; i++)
    {
        char c = s[i];
        switch (c)
        {
        case 'V':
            score += 5;
            break;
        case 'W':
            score += 2;
            break;
        case 'Z':
            if (i != n - 1)
            {
                if (s[i + 1] == 'W')
                {
                    score /= 2;
                    s[i + 1] = '0';
                }
                else if (s[i + 1] == 'V')
                {
                    score /= 5;
                    s[i + 1] = '0';
                }
            }
            break;
        case 'Y':
            if (i != n - 1)
            {
                s.push_back(s[i + 1]);
                n++;
                s[i + 1] = '0';
            }
            break;
        case 'X':
            if (i != n - 1)
            {
                s[i + 1] = '0';
            }
        }
    }
    cout << score;

    return 0;
}