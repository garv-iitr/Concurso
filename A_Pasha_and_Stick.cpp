#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fast ios::sync_with_stdio(false); cin.tie(NULL)
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;cin>>n;
    if(n%2==1 || n < 6) cout<<0<<endl;
    else {
        cout<<(n-1)/4<<endl;
    }
    return;
}

int main(){
    fast;
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}