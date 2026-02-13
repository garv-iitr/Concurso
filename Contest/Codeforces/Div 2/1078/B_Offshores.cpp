#include <bits/stdc++.h>
#include <numeric>
using namespace std;
using ll = long long;
#define fast ios::sync_with_stdio(false); cin.tie(NULL)
#define all(x) (x).begin(), (x).end()

void solve() {
    int n , x , y ;
    cin>> n >> x >> y ;
    vector<int> money_in_bank(n) ;
    for(int i = 0 ; i <  n ; i++) {
        cin>>money_in_bank[i];
    }
    int sum = accumulate(all(money_in_bank) , 0) ;
    cout<< sum << endl ;
}

int main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}