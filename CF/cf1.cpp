#include <bits/stdc++.h>
using namespace std;

#define nitinFastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'

#define FOR(i,a,b) for(int i=(a); i<(b); i++)
#define pb push_back
#define all(v) v.begin(), v.end()

typedef long long int ll;
typedef vector<vector<char>> vvc;

void solve() {
    

    int n,m=4;
  cin>>n;
  
  vector<vector<char>> mm(n, vector<char>(m));

  for(int i=0 ; i<n ; i++){
    for(int j=0 ;j<m ; j++){
      cin>>mm[i][j];
    }
  }

  for(int i=n-1 ; i>=0 ; i--){
    for(int j=m-1 ;j>=0 ; j--){
      if((mm[i][j]) == '#'){
          cout<<j+1<<" ";
      }
    }
  }
    
}

int main() {
    nitinFastIO;
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}