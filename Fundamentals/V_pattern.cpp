#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int n;
  cin>>n;
  n=5;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
      cout<<j;
    }
    for(int j=i+1;j<=n;j++){
      cout<<"  ";
    }
    for(int j=i;j>=1;j--){
      cout<<j;
      
    }
    cout<<'\n';
  }
  return 0;
}
