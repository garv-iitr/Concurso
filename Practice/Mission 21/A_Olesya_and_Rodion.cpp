#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fast ios::sync_with_stdio(false); cin.tie(NULL)
#define all(x) (x).begin(), (x).end()

void solve() {
    int n , t ; cin >> n >> t;
    vector<int> ar(n,t) ;
    if(t == 10) {
        if(n==1) {
            cout<<-1<<endl;
            return;
        }
        for(int i = 0; i < n - 1; i++){
            ar[i] = 1;
        }
        ar[n-1] = 0 ;
    }
    for(int i = 0; i < n; i++){
        cout<<ar[i] ;
    }
    cout<<endl;

}

int main(){
    fast;
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}