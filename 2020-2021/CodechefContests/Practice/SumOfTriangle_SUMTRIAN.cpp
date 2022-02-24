//All Important Header Files
#include <bits/stdc++.h>
#include <iostream>
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
#define le(arr) *(&arr + 1) - arr
#define len(x) x.size()
#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))
#define all(v) v.begin(), v.end()
#define alla(a, n) a, a + n
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

//SOME TYPEDEF DECLARATION
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<vll> vvll;
typedef vector<string> vs;
int bin_dec(int arr[] , int sz);
//CODE WRITTEN BY KRISHNA_6431
void dec_bin(int n){
    int bin_n[32];
    int i=0;
    while(n>0){
        bin_n[i]=n%2;
        n/=2;
        i++;
    }
    for(int j= i-1 ; j>=0 ; j--){
        // cout << bin_n[j];
    }
    // cout << endl;
    // cout << i << endl;
   bin_dec(bin_n,i);
}
//this conversion is for revrsed binary no to decimal
int bin_dec(int arr[] , int sz ){
    int res=0;
    int i=0,j=0;
      for(i=sz-1,j=0 ; i >=0 ; i-- ,j++){
           res+=arr[i]*pow(2,j);
      }
      cout << res;
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    fast;
    // int t;
    // cin >> t;
    // while (t--)
    // {
       
    // }
    int n;
    // cin >> n;
    cin >> n;
    dec_bin(n);

    return 0;
}