#include <bits/stdc++.h>
using namespace std;

// simple recursive function to convert character array to integer
int stringToint(char *str, int n)
{
    if (n == 0)
    {
        return 0;
    }

    int digit = str[n - 1] - '0';
    int smallAns = stringToint(str, n - 1);
    return smallAns * 10 + digit;
}

int main()
{
    char arr[] = "3455";
    int n = strlen(arr);
    cout << stringToint(arr, n) << endl;
    cout << stringToint(arr, n) + 10 << endl;
    return 0;
}