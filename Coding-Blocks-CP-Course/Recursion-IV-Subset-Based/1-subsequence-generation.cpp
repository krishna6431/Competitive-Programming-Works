// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

void generateSubseq(char *arr, int i, char *out, int j)
{
    if (arr[i] == '\0')
    {
        out[j] = '\0';
        for (int k = 0; k < j; k++)
        {
            cout << out[k];
        }
        cout << endl;
        return;
    }

    // including current char
    out[j] = arr[i]; // same output array is passed to the exclude case but there j value is not incremented
    generateSubseq(arr, i + 1, out, j + 1);

    // excluding the character
    generateSubseq(arr, i + 1, out, j);
}

int main()
{

    int n;
    char arr[] = "abc";
    char out[1000];
    generateSubseq(arr, 0, out, 0);
    return 0;
}