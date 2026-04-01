#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fast ios::sync_with_stdio(false); cin.tie(NULL)
#define all(x) (x).begin(), (x).end()

void solve() {
    ll a , b;
    cin>>a>>b;
    ll x = a+b ;
    ll y = (-1 + sqrt(1 + 8*x))/2 ;
    cout<<y<<endl;
}

int main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}