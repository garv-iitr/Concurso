#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fast ios::sync_with_stdio(false); cin.tie(NULL)
#define all(x) (x).begin(), (x).end()

int ar[22] = {60,90,108,120,135,140,144,150,156,160,162,165,168,170,171,172,174,175,176,177,178,179};

void solve() {
    int n ; cin >> n;
    int flag = 0 ;
    for(int i = 0; i < 22; i++){
        if(ar[i] == n) {
            cout<<"YES"<<endl;
            flag = 1;
        }
    }
    if(!flag) cout<<"NO"<<endl;
}

int main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}