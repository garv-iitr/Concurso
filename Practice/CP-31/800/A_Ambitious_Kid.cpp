#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fast ios::sync_with_stdio(false); cin.tie(NULL)
#define all(x) (x).begin(), (x).end()

void solve() {
    int n; 
    cin>>n ;
    vector<int> arr(n , 0) ;
    int min = INT_MAX ;
    for(int i = 0; i < n; i++){
        cin>>arr[i] ;
        arr[i] = abs (arr[i]) ;
        if (min > arr[i]) min = arr[i] ;
    }
    cout << min << endl;
}

int main(){
    fast;
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}