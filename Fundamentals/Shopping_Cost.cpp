#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int t;
  cin>>t;
  for(int i=1;i<=t;i++){
    double q,p;
    cin>>q>>p;
    if(q<=100){
      cout<<fixed<<setprecision(1)<<p*q;
    }
    else{
      double qq=q,pp=p;
      double ans=qq*pp;
      ans=(ans*0.8);
      cout<<fixed<<setprecision(1)<<ans;
    }
    cout<<'\n';
  }
  
  return 0;
}
