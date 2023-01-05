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
bool isleap(int n){
     if(n%4==0){
      if(n%100==0){
        if(n%400==0){
          return true;
        }
        else{
          return false;
        }
      }
      else{
        return true;
      }
      
      
    }
    else{
      return false;
    }
}

void solve(){

    ll d,m,y;
    cin>>d>>m>>y;
    ll ans=0;
    if(m>1){
      ans+=31;
    }
    if(m>2){
      ans+=28;
      if(isleap(y)){
        ans++;
      }
    }

    if(m>3){
      ans+=31;
    }
    if(m>4){
      ans+=30;
    }
    if(m>5){
      ans+=31;
    }
    if(m>6){
      ans+=30;
    }
    if(m>7){
      ans+=31;
    }
    if(m>8){
      ans+=31;
    }
    if(m>9){
      ans+=30;
    }
    if(m>10){
      ans+=31;
    }
    if(m>11){
      ans+=30;
    }
    ans+=d;
    cout<<ans<<"\n";



  
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

