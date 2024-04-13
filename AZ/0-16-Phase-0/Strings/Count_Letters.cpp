// code is written by krishna_6431/mr_krishna
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    map<char,int>mp;
    for(auto x : str){
        mp[x]++;
    }
    for(auto x:mp){
        cout << x.first << " : " << x.second << endl;
    }
    return 0;
}