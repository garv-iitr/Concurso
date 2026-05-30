#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fast ios::sync_with_stdio(false); cin.tie(NULL)
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin>>n;
    vector<int> arr(n,0) ;
    for(int i = 0; i < n; i++){
        cin>>arr[i] ;
    }
    sort(all(arr));
    int x = 0 ;
    for(int i = 1; i < n/2; i++){
        if(((arr[n/2 + i] == arr[n/2 - i])&&(n&1 == 1))||(((arr[(n + i)/2] == arr[(n-i)/2])&&(n&1==0)))) x++ ;
    }
    cout << n/2 - x <<endl;
}

int main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}