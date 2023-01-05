#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int t;
  cin>>t;
  while(t--){
    long long r1,r2,r3;
    long long m;
    cin>>m>>r1>>r2>>r3;
    if(m%4==0){
      cout<<0<<'\n';
    }
    else
    if(m%4==1){
      long long ans=min({3*r1,r1+r2,r3,});
      cout<<ans<<'\n';
    }
    else
    if(m%4==2){
      long long ans=min({2*r1,r2,2*r3});
      cout<<ans<<'\n';
    }
    else{
      long long ans=min({r1,r3+r2,3*r3});
      cout<<ans<<'\n';
    }
  }
  return 0;
}
