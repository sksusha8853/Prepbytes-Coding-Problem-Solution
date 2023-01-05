#include <bits/stdc++.h>
using namespace std;

int main()
{
 
  
  int n;
  cin>>n;
  int ans=0;
  int x,y;
  
  for(int i=1;i<=n;i++){
    cin>>x>>y;
    if(y-x>=2){
      ans++;
    }
  }
  cout<<ans;
  return 0;
}
