
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
  
  map<int , string> m;

  m[1] = "abhinav";
  m[2] = "sharad";
  
  for(auto &ele : m){
    cout<<ele.first<<" "<<ele.second<<endl;
  }

 //unordered_map
 //multimap

  return 0;
}