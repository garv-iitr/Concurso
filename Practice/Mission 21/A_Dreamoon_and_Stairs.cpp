#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fast ios::sync_with_stdio(false); cin.tie(NULL)
#define all(x) (x).begin(), (x).end()

void solve() {
    int n , k ; cin >> n >> k;
    int min = n / 2 + n % 2 ;
    if(k>n) {
        cout<<-1;
        return;
    }
    if(!(min%k)) cout<<min;
    else {
        cout<<min + k - min%k;
    }
}

int main(){
    fast;
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}