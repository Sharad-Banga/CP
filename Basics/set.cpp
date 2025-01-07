
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
  
  set<int> st1;

  st1.insert(1);
  st1.insert(3);
  st1.insert(2);
  st1.insert(5);

  for(auto &ele : st1){
    cout<<ele;
  }
  cout<<""<<endl;

// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
  unordered_set<int> st2;

  st2.insert(1);
  st2.insert(1);

  st2.insert(3);
  st2.insert(2);
  st2.insert(5);

  for(auto &ele : st2){
    cout<<ele;
  }

cout<<endl;
  
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
  multiset<int> st3;

  st3.insert(1);
  st3.insert(1);
  st3.insert(3);
  st3.insert(2);
  st3.insert(5);

  for(auto &ele : st3){
    cout<<ele;
  }

 

  return 0;
}