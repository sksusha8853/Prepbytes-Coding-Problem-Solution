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

	vector<vector<ll>>a(4,vector<ll>(2));
	for(int i=0;i<4;i++){
		cin>>a[i][0]>>a[i][1];
	}
	sort(all(a));
	ll x1=(a[1][0]-a[0][0])*(a[1][0]-a[0][0])+(a[1][1]-a[0][1])*(a[1][1]-a[0][1]);
	ll x2=(a[1][0]-a[3][0])*(a[1][0]-a[3][0])+(a[1][1]-a[3][1])*(a[1][1]-a[3][1]);
	ll x3=(a[2][0]-a[0][0])*(a[2][0]-a[0][0])+(a[2][1]-a[0][1])*(a[2][1]-a[0][1]);
	ll x4=(a[3][0]-a[2][0])*(a[3][0]-a[2][0])+(a[3][1]-a[2][1])*(a[3][1]-a[2][1]);
	if(min({x1,x2,x3,x4})==max({x1,x2,x3,x4})){
		cout<<"Yes\n";
	}
	else{
		cout<<"No\n";
	}




	
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

