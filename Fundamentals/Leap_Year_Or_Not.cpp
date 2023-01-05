
#include <bits/stdc++.h>
using namespace std;

int main()
{
  
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    if(n%4==0){
      if(n%100==0){
        if(n%400==0){
          cout<<"Yes\n";
        }
        else{
          cout<<"No\n";
        }
      }
      else{
        cout<<"Yes\n";
      }
      
      
    }
    else{
      cout<<"No\n";
    }
   
  }
  return 0;
}
