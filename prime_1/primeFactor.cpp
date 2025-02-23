

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

//24 : 2 2 2 3 

void solve(){
  
  int n ;
  cin>>n;
  vector<int> pf;
  
  for(int i = 2 ; i*i<=n ;i++){
    while(n%i==0){
        pf.push_back(i);
        n=n/i;
    }
  }
  if(n>1){
    pf.push_back(n);
  }

  for(int p : pf){
    cout<<p<<" ";
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
