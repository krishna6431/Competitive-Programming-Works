//All Important Header Files
#include <bits/stdc++.h>
#include <iostream>
#include<cstdint>
#include <string>
#include <sstream>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;
//ALL IMPORTANT MACROS
#define pb push_back
#define mp make_pair
#define fr first
#define sc second
#define MOD 1000000007
#define len(x) x.size()
#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))
#define all(v) v.begin(), v.end()
#define alla(a, n) a, a + n
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
//USING NAME SPACE
using namespace std;
//SOME TYPEDEF DECLARATION
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<vll> vvll;
typedef vector<string> vs;

//CODE WRITTEN BY KRISHNA_6431

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    fast;
    int t;
    cin >> t;
    while (t--)
    {  int n;
       cin >> n;
       vector<int>v1;
       ostringstream s1;
       s1 << n;
       string str=s1.str();
       int length=len(str);
       for(int i=length-1;i>=0;i--){
           int temp=int(str[i-length+1])*pow(10,i);
            v1.pb(temp);
            
           if(temp==0){
               v1.pop_back();
           }

       }
       cout << v1.size() <<endl;
       int len=v1.size();
       for(int i=0;i<len;i++){
           cout << v1[i] << " ";
       }
       cout << endl;
       
    }

    return 0;
}