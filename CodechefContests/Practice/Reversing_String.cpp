//All Important Header Files
#include<bits/stdc++.h>
#include <iostream> 
#include <string>
#include<cctype>
#include <sstream>
#include <algorithm>
#include<math.h>
#include<vector>
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
#define alla(a,n) a, a + n
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL) ; cout.tie(NULL) ;
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
string int_str(int i){
    ostringstream s1;
    s1<<i;
    string str=s1.str();
    return str;
}

int  main() {

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin) ;
        freopen("output.txt", "w", stdout) ;
    #endif
    fast;
    int t;
    cin>>t;
    while(t--){       
        //Code Logic
   int n;
   cin >> n;
   string str_n=int_str(n);
   cout << str_n;
   string temp;
   for(int i=0;i<len(str_n);i++){
       temp[i]==str_n[(len(str_n)-i-1)];
   }
   if(temp==str_n) cout << str_n;

   }  
    return 0 ;
}