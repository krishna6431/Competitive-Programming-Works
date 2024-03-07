// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    cin.ignore();
    int start = 0;
    for(int i = 0 ; i < str.size();  i++){
        if(str[i] == ' '){
            reverse(str.begin() + start, str.begin() + i);
            start = i + 1;
        }
    }
    reverse(str.begin() + start, str.begin() + str.size());
    cout << str << endl;
    return 0;
}