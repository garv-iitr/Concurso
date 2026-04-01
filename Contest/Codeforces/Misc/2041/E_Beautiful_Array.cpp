#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fast ios::sync_with_stdio(false); cin.tie(NULL)
#define all(x) (x).begin(), (x).end()

void solve() {
    int a , b ;
    cin>>a>>b;
    vector<int> arr(3,a);
    int x = b - a ;
    arr[0] -= 3*x ;
    arr[1] += x ;
    arr[2] += 2*x ;
    cout<<3<<endl ;
    for(int i = 0; i < 3; i++){
        cout<<arr[i]<<" " ; 
    }
}

int main(){
    fast;
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}