#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fast ios::sync_with_stdio(false); cin.tie(NULL)
#define all(x) (x).begin(), (x).end()

void solve() {
    int n ; cin >> n;
    vector<int> ar(n) ;
    int d = INT_MAX ;
    for(int i = 0; i < n; i++){
        cin>>ar[i];
    }
    if(!is_sorted(all(ar))) {
        cout<<0<<endl;
        return; 
    }
    for(int i = 1; i < n; i++){
        if(ar[i] -ar[i-1] < d) d = ar[i] - ar[i-1] ;
    }
    cout << d/2 + 1 << endl;

}

int main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}