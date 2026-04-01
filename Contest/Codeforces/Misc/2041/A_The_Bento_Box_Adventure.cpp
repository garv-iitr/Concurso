#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fast ios::sync_with_stdio(false); cin.tie(NULL)
#define all(x) (x).begin(), (x).end()

void solve() {
    int sum = 0 ;
    int x ;
    for(int i = 0 ; i < 4 ; i++) {
        cin>>x ;
        sum+=x;
    } 
    cout<<15-sum<<endl;
}

int main(){
    fast;
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}