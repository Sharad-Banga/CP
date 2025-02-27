

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

int poww(int a, int b){
  
  if(b==1) return a;

  if(b%2==0){
    return poww(a,b/2) * poww(a,b/2);
  }
  else{
    return poww(a,b-1) * a;
  }
}

void solve(){
  
  int a,b ;
  cin>>a>>b;
  
  cout<<poww(a,b);
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
