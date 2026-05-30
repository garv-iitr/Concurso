#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fast ios::sync_with_stdio(false); cin.tie(NULL)
#define all(x) (x).begin(), (x).end()

void solve() {
    ll x1 , y1 , r1 , x2 , y2 , r2 ;
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2 ;
    long double d = sqrt( (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
    
    if ( d > r1+r2 || (abs(r1-r2) > d)) {
        cout << "No" << endl ;
    }
    else {
        cout << "Yes" << endl ;
    }
}

int main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}