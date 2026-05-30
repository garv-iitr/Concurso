#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fast ios::sync_with_stdio(false); cin.tie(NULL)
#define all(x) (x).begin(), (x).end()

void solve() {
    int n,m;
     cin>>n>>m;
     int temp = m;
     int i= 0;
     for(i = 0; i < m; i++){
        temp = n%temp;
        if(temp == 0) {
            break;
        }
    }
    cout << i + 1;
}

int main(){
    fast;
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}