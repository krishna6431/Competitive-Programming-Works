//All Important Header Files
#include<bits/stdc++.h>
#include <iostream> 
#include <string>
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


//SOME TYPEDEF DECLARATION 
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<vll> vvll;
typedef vector<string> vs;

//CODE WRITTEN BY KRISHNA_6431



int  main() {

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin) ;
        freopen("output.txt", "w", stdout) ;
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL) ; cout.tie(NULL) ;

    int t ;
    cin >> t ;

    while( t-- ) {
        int n,s;
        int p[n],a[n];
        vector<int> temp1,temp2;
        
        cin >> n >> s;
        for (int i=0;i<n;i++){
            cin >> p[i];
        }
        for(int j=0 ;j<n;j++){
            cin >> a[j];
            
        }

        for(int k=0;k<n;k++){
            if(a[k]==0){
                temp1.push_back(p[k]);
            }
            else{
                temp2.push_back(p[k]);
            }
        }
        
        // int mini=*min_element(temp1.begin(),temp1.end())+*min_element(temp2.begin(),temp2.end());    
        
    
        // if(temp1.size()==0 or temp2.size()==0){
        //      cout  << "no" << endl;
        //     }
        //  else{
            sort(temp1.begin(),temp1.end());
            sort(temp2.begin(),temp2.end());
            int mini = temp1.front()+temp2.front()+s;
            if (mini <= 100) cout << "yes" << endl;
            
            
            else cout  << "no" << endl;
            
             
        // }    

    }
    
    return 0 ;
}//All Important Header Files
#include<bits/stdc++.h>
#include <iostream> 
#include <string>
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


//SOME TYPEDEF DECLARATION 
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<vll> vvll;
typedef vector<string> vs;

//CODE WRITTEN BY KRISHNA_6431



int  main() {

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin) ;
        freopen("output.txt", "w", stdout) ;
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL) ; cout.tie(NULL) ;

    int t ;
    cin >> t ;

    while( t-- ) {
        int n,s;
        int p[n],a[n];
        vector<int> temp1,temp2;
        
        cin >> n >> s;
        for (int i=0;i<n;i++){
            cin >> p[i];
        }
        for(int j=0 ;j<n;j++){
            cin >> a[j];
            
        }

        for(int k=0;k<n;k++){
            if(a[k]==0){
                temp1.push_back(p[k]);
            }
            else{
                temp2.push_back(p[k]);
            }
        }
        
        // int mini=*min_element(temp1.begin(),temp1.end())+*min_element(temp2.begin(),temp2.end());    
        
    
        // if(temp1.size()==0 or temp2.size()==0){
        //      cout  << "no" << endl;
        //     }
        //  else{
            sort(temp1.begin(),temp1.end());
            sort(temp2.begin(),temp2.end());
            int mini = temp1.front()+temp2.front()+s;
            if (mini <= 100) cout << "yes" << endl;
            
            
            else cout  << "no" << endl;
            
             
        // }    

    }
    
    return 0 ;
}