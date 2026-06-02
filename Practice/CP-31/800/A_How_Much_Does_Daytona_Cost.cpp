#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fast ios::sync_with_stdio(false); cin.tie(NULL)
#define all(x) (x).begin(), (x).end()

void solve() {
    int n , k ;
    cin>>n>>k;
    vector<int> arr(n,0) ;
    int flag = 0; 
    for(int i = 0; i < n; i++){
        cin>>arr[i];
        if(arr[i] == k) flag = 1;
    }
    if(flag) {
        cout<<"YES" << endl;
    }
    else {
        cout<<"NO" <<endl ;
    }

}

int main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}