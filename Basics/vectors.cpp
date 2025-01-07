#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
  
  vector<int> v;
  v.push_back(1);
  v.push_back(4);
  v.push_back(3);

  sort(v.begin(),v.end());

   //insert
  v.insert(v.begin(),10);
  
  for(int i=0 ;i<v.size() ; i++){
    cout<<v[i];
  }

 

  return 0;
}