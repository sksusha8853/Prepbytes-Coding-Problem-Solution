#include <bits/stdc++.h>
using namespace std;
void solve(){
  int a,b,c,n;
  cin>>a>>b>>c>>n;
  cout<<a<<" "<<b<<" "<<c<<" ";
  vector<int>v(n+1);
  v[0]=0;
  v[1]=a;
  v[2]=b;
  v[3]=c;
  int sum=a+b+c;
  for(int i=4;i<=n;i++){
    cout<<sum<<" ";
    v[i]=sum;
    sum=2*sum-v[i-3];
    
  }
  cout<<'\n';
}
int main()
{
  //write your code here
  int t;
  cin>>t;
  while(t--){
    solve();
  }
  
  return 0;
}
