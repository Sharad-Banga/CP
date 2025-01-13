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
    
    int x,y,k;
    cin>>x>>y>>k;

    int p = (x+k-1)/k;
    int q = (y + k - 1) / k;

           


    if(x<y){
        cout<<2*q<<endl;
    }
    else if(y==x){
        cout<<2*q<<endl;
    }
    else{
        cout<<(2*p)-1<<endl;
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