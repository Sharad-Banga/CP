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

  int n,a,b,c;
  cin>>n>>a>>b>>c;

  int y = (n/(a+b+c))*3;
  
  int x = n%(a+b+c);
  
  int z = 0;
  if(x==0){
    cout<<y<<endl;
  }
  else{
    if(x<=a){
      z=1;
    }
    else if(x<=a+b){
      z = 2;
    }
    else{
      z = 3;
    }

    cout<<y+z<<endl;
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