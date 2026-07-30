#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fast ios::sync_with_stdio(false); cin.tie(NULL)
#define all(x) (x).begin(), (x).end()

void solve() {
    int n , m ; cin >> n >> m ;
    int cnt = 0 ;
    int na = n ;
    int ma = m ;
    while(ma != na) {
        if(na > ma) {
            cnt = na - ma ;
            na = ma ;
        }
        else if (ma&1) {
            ma++ ;
            cnt++ ;
        }
        else if (ma/2 >= na) {
            ma /= 2 ;
            cnt++;
        }
        else {
            cnt += (na - ma/2 + 1)  ;
            ma = na ;
        }
    }
    cout << cnt << endl;
}

int main(){
    fast;
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}