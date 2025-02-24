

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define FOR(i,a,b) for(int i=(a); i<(b); i++)
#define FORk(i,a,b,k) for(int i=(a); i<(b); i+=k)
#define RFOR(i,a,b) for(int i=(a); i>=(b); i--)
#define RFORk(i,a,b,k) for(int i=(a); i>=(b); i-=k)
#define pb push_back
typedef vector<int> vi;
typedef vector<string> vs;
typedef long long int ll;
typedef unsigned long long int  ull;
typedef vector<ll> vll;
typedef vector<ull> vull;


// 2 3 4. 5 6. 7 8. 9. 
//2 3 5 7 

void solve(){
  
  int n ;
  cin>>n;
  vector<bool> arr(n+1 , true);
  for(int i=2 ;i*i<=n ; i++){
    for(int j = i*i ; j<=n ; j+=i){
      arr[j] = false;
    }
  }

  for(int k = 2 ; k<=n ; k++){
    if(arr[k]){
      cout<<k<<" ";
    }
  }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    FOR(i,1,t+1) {
        solve();
    }
    return 0;
}
