// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int score = 0;
    int headCount = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == 'H')
        {
            headCount++;
            score += 2;
        }
        if (headCount == 3)
        {
            break;
        }
        if (str[i] == 'T')
        {
            score -= 1;
            headCount = 0;
        }
    }
    cout << score << endl;
    return 0;
}