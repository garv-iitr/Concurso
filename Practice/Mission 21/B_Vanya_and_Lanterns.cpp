#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fast ios::sync_with_stdio(false); cin.tie(NULL)
#define all(x) (x).begin(), (x).end()

void solve() {
    int n , l ; cin >> n >> l;
    vector<double> ar(n+1) ;
    ar[0] = 0 ; 
    for(int i = 1; i <= n; i++){
        cin>>ar[i] ;
    }
    sort(all(ar)) ;
    double diff = -1 ;
    for(int i = 0; i < n; i++){
        diff = max (diff , ar[i+1] - ar[i]) ;
    }

    if(diff/2 < ar[1] && ar[1] > l - ar[n]) diff = ar[1]  ;
    else if (diff/2 < l - ar[n]) diff = l - ar[n];
    else diff /= 2;
    
    cout << fixed << setprecision(10) << diff ;
    
}

int main(){
    fast;
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}