#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fast ios::sync_with_stdio(false); cin.tie(NULL)
#define all(x) (x).begin(), (x).end()

void solve() {
    int n ;
    cin>>n;
    vector<int> arr(n-1,0) ;
    int sum = 0 ;
    for(int i = 0; i < n-1; i++){
        cin>>arr[i] ;
        sum+=arr[i];
    }
    cout<< -sum <<endl ;
}

int main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}