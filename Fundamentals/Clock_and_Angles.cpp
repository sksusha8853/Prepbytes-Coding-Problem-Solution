#include<bits/stdc++.h>
using namespace std;
#define ll   double
#define pb   push_back
#define all(v) v.begin(),v.end()
#define umap unordered_map
void fileIO(string filename) {
	freopen((filename + ".in").c_str(), "r", stdin);
	freopen((filename + ".out").c_str(), "w", stdout);
}
ll mod=1e9+7;

void solve(){
	ll h,m;
	cin>>h>>m;
	ll a=h*30+m*0.5;
	ll b=m*6;
	ll c=abs(a-b);
	ll ans=min(c,360-c);
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

