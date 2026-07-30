#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fast ios::sync_with_stdio(false); cin.tie(NULL)
#define all(x) (x).begin(), (x).end()

void solve() {
    int n , k , q ; cin >> n >> k >> q;
    vector<ll> ar(n) ;
    ll sum = 0;
    for(int i = 0; i < n; i++){
        cin>>ar[i];
    }
    for(int i = 0; i < n; i++){
        int cnt = 0 ;
        while(ar[i] <= q && i < n) {
            cnt++;
            i++;
        }
        if(cnt>=k) {
            for(int i = k; i <= cnt; i++){
                sum+=cnt-i+1;
            }
        }
    }
    cout<<sum<<endl;

}

int main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}