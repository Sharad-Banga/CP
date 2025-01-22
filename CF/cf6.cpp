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

  long long n;
  cin>>n;
  long long ans = 1;
  while(n>3){
    
      ans*=2;
      
    
    n=n/4;
  }
  
  cout<<ans<<endl;
  
    
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