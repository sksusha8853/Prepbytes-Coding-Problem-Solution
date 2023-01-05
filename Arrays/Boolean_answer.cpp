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
	int n,m;
	cin>>n>>m;
	int ma=0,ind=-1;
	int a[n][m];
	for(int i=0;i<n;i++){
		int sum=0;
		for(int j=0;j<m;j++){
			cin>>a[i][j];
			sum+=a[i][j];
		}
		if(sum>ma){
			ind=i;
			ma=sum;
		}
	}
	cout<<ind<<"\n";




	
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

