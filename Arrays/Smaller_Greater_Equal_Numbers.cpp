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
	ll n,k;
	cin>>n>>k;

	int x=0;
	int cnt=0,cnt1=0,cnt2=0;
	for(int i=1;i<=n;i++){
		cin>>x;
		if(x<k){
			cnt++;
		}
		else
			if(x==k){
				cnt2++;
			}
			else{
				cnt1++;
			}
	}
	cout<<cnt<<" "<<cnt1<<" "<<cnt2<<"\n";


	
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
