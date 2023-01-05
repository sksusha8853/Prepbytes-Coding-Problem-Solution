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
	int n;
	cin>>n;
	vector<int>a(1001);
	int z;
	for(int i=1;i<=n;i++){
		cin>>z;
		a[z]++;
	}
	int ans=0;
	for(int i=1;i<=1000;i++){
		if(a[i]==1){
			ans++;
		}
	}
	cout<<ans;



	
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

