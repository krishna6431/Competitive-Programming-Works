#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    //testcase
    int test;
    cin >> test;
    while (test--)
    {
        //code section
        int n;
        cin >> n;
        vector<int> res(n);
        for (int i = 0; i < n; i++)
        {
            cin >> res.at(i);
        }
        //c++ stl function sort vector in nlogn time implemented in algorithm library
        //need to include algorithm library
        sort(res.begin(), res.end());

        //now print vector
        for (int i = 0; i < n; i++)
        {
            cout << res.at(i) << " ";
        }
        cout << endl;
    }
    return 0;
}