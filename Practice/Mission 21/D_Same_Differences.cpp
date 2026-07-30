#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fast ios::sync_with_stdio(false); cin.tie(NULL)
#define all(x) (x).begin(), (x).end()

void solve() {
    int n ; cin >> n;
    vector<ll> ar(n) ;
    int c = 0;
    for(int i = 0; i < n; i++){
        cin>>ar[i];
        ar[i] = ar[i] - i ;
    }
    sort(all(ar)) ;
    ll sum = 0 ;
    for(int i = 0; i < n - 1 ; i++){
        ll cnt = 0;
        while(ar[i] == ar[i+1] && i < n - 1) {
            cnt++; 
            i++;
        }
        sum += cnt*(cnt+1) /2 ;
    }
    cout << sum <<endl;
}

int main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}