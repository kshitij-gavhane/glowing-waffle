#include<bits/stdc++.h> 
#include<iostream>
#define ll long long 
using namespace std;

void solve(){
  int n; 
  cin>>n; 
  for(int i=1; i<=n; i++){
    for(int j=1; j<=n-i; j++) 
       cout<<" ";
    for(int j=1; j<=i; j++){
          cout<<"("; 
    }  
     cout<<"*";
    for(int j=1; j<=i; j++){
          cout<<")"; 
    }
    cout<<endl; 
  }
}
int main()
{ 
  ios_base::sync_with_stdio(0); 
  cin.tie(0); 
  cout.tie(0);
  int t; solve();
  cin>>t; 
  
      return 0;
}
