#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fast ios::sync_with_stdio(false); cin.tie(NULL)
#define all(x) (x).begin(), (x).end()

ll nr(int n , int r) {
    if(r<0 || r > n) return 0 ;
    if(r== 0 || r == n) return 1 ;

    if(r > n-r) r = n-r ;
    ll v = 1 ;
    for(int i = 1; i <= r; ++i){
        v*= (n-r+i) ;
        v/=i ;
    }
    return v ;
}
void solve() {
    string d , m ;
    cin>> d >> m ;
    int n = d.size() ;
    int c = 0, dp = 0 , mp = 0 ;

    for(int i = 0; i < n; i++){
        if(d[i] == '+') dp++ ;
        
        if(m[i] == '+') mp++ ;
        else if (m[i]=='?') c++; 
    }
    double t = dp - mp ;
    
    cout << fixed << setprecision(12) << nr(c , t) * pow (0.5 , c);
    return;
    
}

int main(){
    fast;
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}