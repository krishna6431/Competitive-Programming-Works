#include <bits/stdc++.h>

using namespace std;

unordered_map<char, char> dtr;

int solve(int index, int balance, const string &S)
{
    if (index == S.length())
    {
        return (balance == 0) ? 1 : 0;
    }

    char digit = S[index];
    int result = 0;

    if (dtr.find(digit) != dtr.end())
    {
        char role = dtr[digit];
        if (role == '(')
        {
            if (balance > 0)
            {
                result += solve(index + 1, balance - 1, S);
            }
        }
        else
        {
            result += solve(index + 1, balance + 1, S);
        }
    }
    else
    {
        dtr[digit] = '(';
        if (balance > 0)
        {
            result += solve(index + 1, balance - 1, S);
        }

        dtr[digit] = ')';
        result += solve(index + 1, balance + 1, S);

        dtr.erase(digit);
    }

    return result;
}

int main()
{
    int N;
    string S;
    cin >> N >> S;
    dtr.clear();
    int result = solve(0, 0, S);
    cout << result << endl;

    return 0;
}
