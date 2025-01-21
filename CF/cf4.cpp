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
  int n;
  cin>>n;

  vector<int> a(n), b(n);

        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

    int aa = 0;
    int bb = 0;
    bool A = false;
    bool B = false;
    int AA = 0;
    int BB = 0;
    for(int i=0 ; i<n ; i++){
        AA = aa;
        BB = bb;
      
      if(n==1 && i==0 ){
          aa+=a[i];
      }
      if(i==0 && n>1 && a[i]>=b[i]){
        aa+=a[i];
      }
      if(A==true && b[i]>=a[i]){
        bb+=b[i];
      }

      if(A==true && a[i]>b[i]){
        aa+=a[i];
        bb+=b[i];
      }

      if(B==true && A==false){
        aa+=a[i];
      }

      if(AA==aa){
        A = false;
      }else{
        A = true;
      }

      if(BB==bb){
        B = false;
      }else{
        B = true;
      }

      
    }

    cout<<aa-bb<<endl;


    
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