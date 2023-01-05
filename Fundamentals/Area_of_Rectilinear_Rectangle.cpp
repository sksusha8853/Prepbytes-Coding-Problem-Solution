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
	ll x1,x2,x3,x4,y1,y2,y3,y4;
	cin>>x1>>y1>>x2>>y2;
	cin>>x3>>y3>>x4>>y4;
	ll x5,y5,x6,y6;
	x5=max(x1,x3);
	x6=min(x2,x4);
	y5=max(y1,y3);
	y6=min(y2,y4);
	ll ans=(x2-x1)*(y2-y1)+(x4-x3)*(y4-y3);
	ans=ans-(max(0ll,x6-x5)*max(0ll,y6-y5));
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

