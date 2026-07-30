#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fast ios::sync_with_stdio(false); cin.tie(NULL)
#define all(x) (x).begin(), (x).end()

void solve() {
    ll n , m , a ; cin >> n >> m >> a;
    ll na = 0; if (n%a) na = 1 ;
    ll ma = 0; if (m%a) ma = 1 ;
    cout << (n/a  + na) * (m/a  + ma) ;
}

int main(){
    fast;
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}