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
	vector<ll>a={0,9,99,999,9999,99999,999999,9999999,99999999,999999999,9999999999};

	ll ans=0;
	for(ll i=1;i<a.size();i++){
		if(a[i]<=n){
			ans+=(i*(a[i]-a[i-1]));
		}
		else{
			ans+=(i*(n-a[i-1]));
			break;
		}


	}
	cout<<ans<<'\n';


	
}

int main()
{ios_base::sync_with_stdio(false);cin.tie(0);cin.tie(0);
	 //fileIO("");
	 int t=1;
	 cin>>t;
	 for(int i=1;i<=t;i++){
	 	
	 	solve();
	 	
	 }
	 
return 0;}

