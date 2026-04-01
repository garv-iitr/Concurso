#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fast ios::sync_with_stdio(false); cin.tie(NULL)
#define all(x) (x).begin(), (x).end()

void solve() {
    int n ;
    cin>>n;
    vector<int> arr(n,0) ;
    for(int i = 0 ; i < n ; i++) cin>>arr[i] ;
    for(int i = 0; i < n; i++){
        int count = -2 ;
        for(int j = i + 1 ; j < n ; j++) {
            if(arr[j] < arr[i]) count++ ;
            else {break;} ;
        }
        cout<<count<<" " 
    }
    cout<<endl ;
}

int main(){
    fast;
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}