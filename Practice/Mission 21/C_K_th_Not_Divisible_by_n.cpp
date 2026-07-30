#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fast ios::sync_with_stdio(false); cin.tie(NULL)
#define all(x) (x).begin(), (x).end()

void solve() {
    ll n  , k ; cin >> n >> k;
    int m = k/(n-1) ;
    if(k%(n-1)) cout << m * n + (k - m*(n-1)) << endl ;
    else cout << m * n - 1 << endl ;
}

int main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}