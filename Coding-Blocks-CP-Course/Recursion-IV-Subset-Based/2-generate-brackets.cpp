// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

// fuction to generate valid parenthesis
void generateParanthesis(int n, int i, int open, int closed, char *out, int j)
{
    // base case when both open and closed equal to n
    if (i == 2 * n)
    {
        out[j] = '\0';
        for (int i = 0; i < j; i++)
        {
            cout << out[i] << "";
        }
        cout << endl;
        return;
    }

    // generate opening bracket
    if (open < n)
    {
        out[j] = '(';
        generateParanthesis(n, i + 1, open + 1, closed, out, j + 1);
    }

    // generating closed bracket
    if (closed < open)
    {
        out[j] = ')';
        generateParanthesis(n, i + 1, open, closed + 1, out, j + 1);
    }
}

int main()
{
    int n;
    cin >> n;
    char output[500];
    generateParanthesis(n, 0, 0, 0, output, 0);
    return 0;
}