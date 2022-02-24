#include <iostream>
using namespace std;
int main()
{
    //    code is written by krishna
    int tc;
    cin >> tc;
    int n, m;
    while (tc--)
    {
        cin >> n >> m;
        if ((n * (n + 1)) / 2 == m)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}