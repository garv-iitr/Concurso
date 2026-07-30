#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fast ios::sync_with_stdio(false); cin.tie(NULL)
#define all(x) (x).begin(), (x).end()

void solve() {
    int n ; cin >> n;
    int k = n%4;
    if(k == 1) cout<<8<<endl;
    else if (k==2) cout<<4<<endl;
    else if (k==3) cout<<2<<endl;
    else if (n==0) cout<<1<<endl;
    else cout<<6<<endl;
}

int main(){
    fast;
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}