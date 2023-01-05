#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int x;
  cin>>x;
  do{
    cout<<x%10;
    x/=10;
  }while(x);
  
  return 0;
}
