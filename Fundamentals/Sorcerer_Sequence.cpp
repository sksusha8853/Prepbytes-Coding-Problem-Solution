#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int t;
  cin>>t;
  while(t--){
    long long n;
    cin>>n;
   while(n!=1){
     cout<<n<<" ";
     if(n%2){
       n=n*sqrt(n);
     }
     else{
       n=sqrt(n);
     }
     
   }
   cout<<1<<'\n';
  }
  
  return 0;
}
