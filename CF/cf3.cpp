// A. Two Frogs
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define nitinFastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'

#define FOR(i,a,b) for(int i=(a); i<(b); i++)
#define pb push_back
#define all(v) v.begin(), v.end()

typedef long long int ll;
typedef vector<vector<char>> vvc;



void solve() {
    
    int n,a,b;
    cin>>n>>a>>b;

    int x = b-a;

    if(x%2==0){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
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