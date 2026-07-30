#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fast ios::sync_with_stdio(false); cin.tie(NULL)
#define all(x) (x).begin(), (x).end()

void solve() {
    int n ; cin >> n;
    int x = 0 , y = 0 , z = 0 ;
    for(int i = 0; i < n; i++){
        int xa , ya , za ;
        cin>>xa>>ya>>za;
        x+=xa;y+=ya;z+=za;
    }
    if(!(x|y|z)) cout<< "YES\n";
    else cout << "NO" ;
}

int main(){
    fast;
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}