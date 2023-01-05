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
	ll d1,c1,m1,p1,s1,k1;
	cin>>d1>>c1>>m1>>p1>>s1>>k1;
	ll n;
	cin>>n;
	ll a=d1+c1+m1;
	ll b=p1+s1+k1;
	ll z=(a+4)/5+(b+9)/10;
	if(n>=z){
		cout<<"YES";
	}
	else{
		cout<<"NO";
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

