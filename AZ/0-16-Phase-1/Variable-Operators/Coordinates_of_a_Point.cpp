// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double a, b;
        cin >> a >> b;
        if (a == 0 and b == 0)
        {
            cout << "Origem" << endl;
        }
        else if (a == 0 and b != 0)
        {
            cout << "Eixo Y" << endl;
        }
        else if (a != 0 and b == 0)
        {
            cout << "Eixo X" << endl;
        }
        else if (a > 0 and b > 0)
        {
            cout << "Q1" << endl;
        }
        else if (a > 0 and b < 0)
        {
            cout << "Q4" << endl;
        }
        else if (a < 0 and b > 0)
        {
            cout << "Q2" << endl;
        }
        else
        {
            cout << "Q3" << endl;
        }
    }

    return 0;
}