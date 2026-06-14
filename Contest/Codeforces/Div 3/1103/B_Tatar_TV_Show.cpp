#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fast ios::sync_with_stdio(false); cin.tie(NULL)
#define all(x) (x).begin(), (x).end()

void solve() {
    int n , k ;
    cin>>n>>k;
    string s ;
    cin>>s ;
    int flag = 1 ;
    for(int i = 0; i < n-k; i++){
        if(s[i] ^ s[i+k]) flag = 0
    }
    if(flag) {

    }
}

int main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}