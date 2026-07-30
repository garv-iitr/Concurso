#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fast ios::sync_with_stdio(false); cin.tie(NULL)
#define all(x) (x).begin(), (x).end()

void solve() {
    int n ; cin>>n;
    vector<int> arr(n+1) ;
    arr[0] = 0 ;
    for(int i = 1; i <= n; i++){
        cin>>arr[i];
        }
        if(n&1) {
            cout<<"NO\n";
            return;
        }
    
    int mi = INT_MAX ;
    int ma = INT_MIN ;
    for(int i = 1; i <= n; i++){
        if(i&1) mi = min(mi,arr[i]) ;
        else ma = max(ma , arr[i]);
    }
    if (ll(mi - ma) > 1) cout<<"YES\n" ;
    else cout<<"NO\n" ;


}

int main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}