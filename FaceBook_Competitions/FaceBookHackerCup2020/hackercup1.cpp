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
        int n;
        cin >> n;
        string in;
        string out;
        cin >> in >> out;
        char res[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                {
                    res[i][j] = 'Y';
                }
                else
                {

                    res[i][j] = 'N';
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (out[i] == 'Y')
            {

                if (i == n - 1 && in[i - 1] == 'Y')
                {

                    int k = i;
                    while (in[k - 1] == 'Y' && out[k] == 'Y')
                    {
                        res[i][k - 1] = 'Y';
                        k--;
                    }
                }
                else if (i == 0 && in[i + 1] == 'Y')
                {
                    int k = i;
                    while (in[k + 1] == 'Y' && out[k] == 'Y')
                    {
                        res[i][k + 1] = 'Y';
                        k++;
                    }
                }
                else
                {
                    if (in[i - 1] == 'Y')
                    {
                        int k = i;
                        while (in[k - 1] == 'Y' && out[k] == 'Y')
                        {
                            res[i][k - 1] = 'Y';
                            k--;
                        }
                    }
                    if (in[i + 1] == 'Y')
                    {

                        int k = i;
                        while (in[k + 1] == 'Y' && out[k] == 'Y')
                        {
                            res[i][k + 1] = 'Y';
                            k++;
                        }
                    }
                }
            }
        }

        cout << "Case #" << count << ":"
             << "\n";
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << res[i][j];
            }
            cout << "\n";
        }
        count++;
    }
    return 0;
}