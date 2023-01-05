#include<bits/stdc++.h>
using namespace std;
#define ll   long long int
#define pb   push_back
#define all(v) v.begin(),v.end()
#define umap unordered_map
void fileIO(string filename) {
	freopen((filename + ".in").c_str(), "r", stdin);
	freopen((filename + ".out").c_str(), "w", stdout);
}
ll mod=1e9+7;

void solve(){
	ll n;
	cin>>n;
	ll cnt1=0,cnt2=0;
	vector<bool>dp(n+1,false);
	dp[0]=true;
	for(int i=1;i<=n;i++){
		if(i>=4){
			dp[i]=dp[i] or dp[i-4];
		}
		if(i>=7){
			dp[i]=dp[i] or dp[i-7];
		}
	}

	if(!dp[n]){
		cout<<-1;
		return;

	}
	for(int i=1000000;i>=0;i--){
		if(i*7<=n){
			ll z=n-i*7;
			if(z%4==0){
				ll p=z/4;
				for(int j=1;j<=p;j++){
					cout<<4;
				}
				for(int j=1;j<=i;j++){
					cout<<7;
				}
				return;
			}

		}
	}



	
}

int main()
{ios_base::sync_with_stdio(false);cin.tie(0);cin.tie(0);
	 //fileIO("");
	 int t=1;
	 //cin>>t;
	 for(int i=1;i<=t;i++){
	 	
	 	solve();
	 	
	 }
	 
return 0;}

