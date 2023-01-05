#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int ans=0;
    for(int i=1;i<n;i++){
      if(n%i==0){
        ans+=i;}
    }
    if(ans==n){
      cout<<"true\n";
    }
    else
    cout<<"false\n";
  }
  
  return 0;
}
