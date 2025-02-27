

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

int gcd(int a , int b){
  if(b==0) return a;
  return gcd(b,a%b);
}

bool isPossible(int a, int b , int c){

  int x = gcd(a,b);

  if(c%x==0){
    return true;
  }
  else{
    return false;
  }
}


void solve(){
  
  int a,b,c ;
  cin>>a>>b>>c;

  // ax+by = c

  cout<<isPossible(a,b,c)<<endl;



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
