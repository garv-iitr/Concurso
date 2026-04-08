#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fast ios::sync_with_stdio(false); cin.tie(NULL)
#define all(x) (x).begin(), (x).end()

void solve() {
    int n , k ;
    cin>>n>>k ;
    vector<unsigned int> arr(n,0) ;
    ll sum = 0 ;
    ll nk = n*k ;
    for(int i = 0; i < n; i++){
        cin>>arr[i] ;
        sum += arr[i];
    }
    if(sum%2 == 1) {
        cout<<"YES"<<endl ;
        return ;
    } 
    if(nk%2 == 0) {
        cout<<"YES"<<endl ;
        return ;
    }

    cout << "NO" <<endl ;
    return ;

}

int main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}