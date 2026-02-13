#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fast ios::sync_with_stdio(false); cin.tie(NULL)
#define all(x) begin(x), end(x)

void solve() {
    int n ;
    cin>>n;
    vector<int> per(n) ;
    vector<int> arr(n) ;
    for(int i = 0 ; i < n ; i++) {
        cin>>per[i] ;
    }
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = 1; j <= n; j++){
            if(arr[i] == per[j-1] ) {
                arr[i] = j ;
                break;
            }
        }
    }
    if(is_sorted(all(arr))) {
        cout << "YES\n" ;
    }
    else {
        cout << "NO\n";
    }

}

int main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}