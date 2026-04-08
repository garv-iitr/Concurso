#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fast ios::sync_with_stdio(false); cin.tie(NULL)
#define all(x) (x).begin(), (x).end()

void solve() {
    int n , k ;
    cin>>n>>k ;
    vector<int> arr(n) ;
    for(int i = 0; i < n; i++){
        cin>>arr[i] ;
    }
    int pos ;
    cin>>pos ;
    int lcnt = 0 , rcnt = 0 ;

    if(arr[pos-1] == 0) {
        if(arr[0] == 1) lcnt++ ;
        for(int i = 1; i < pos ; i++){
            if(arr[i] == 0 || arr[i] == arr[i-1]) continue ;
            lcnt++;
        }
        for(int i = pos  ; i < n; i++){
            if(arr[i] == 0 || arr[i] == arr[i-1]) continue ;
            rcnt++;
        }
    }
    else {
        if(arr[0] == 0) lcnt++ ;
        for(int i = 1; i < pos ; i++){
            if(arr[i] == 1 || arr[i] == arr[i-1]) continue ;
            lcnt++;
        }
        for(int i = pos  ; i < n; i++){
            if(arr[i] == 1 || arr[i] == arr[i-1]) continue ;
            rcnt++;
        }
    }
    cout<< 2 * max(rcnt , lcnt) <<endl ;
    return ;

}

int main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}