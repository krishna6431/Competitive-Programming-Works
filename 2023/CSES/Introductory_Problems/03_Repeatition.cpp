#include<bits/stdc++.h>
#define ll long long int 
#define INF (ll)1e18
#define mod 998244353
using namespace std;

void solve(){
	string str;
	cin>>str;
	int x=str.length();
	int count=0;
	int ans=0;
	for (int i = 0; i < x-1; ++i)
	{
		if (str[i]==str[i+1])
		{
			count++;
		}
		else if (str[i]!=str[i+1])
		{
			count=0;
		}
         ans=max(count,ans);
	}
   cout<<ans + 1<<"\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}
