#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fast ios::sync_with_stdio(false); cin.tie(NULL)
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin>>n;
    int flag = 1; 
    vector<int> arr(n,0) ;
    for(int i = 0; i < n; i++){
        cin>>arr[i]; 
    }
    sort(all(arr) , greater<int>()) ;
    if(n==2) {
        cout<<arr[0] << " " << arr[1] <<endl ;
        return ;
    }
    for(int i = 2; (i < n )&& flag; i++){
        if(arr[i] != arr[i-2] % arr[i-1]) flag = 0 ;
    }
    if(flag) {
        cout<<arr[0] << " " << arr[1] <<endl ;
    }
    else{
        cout<<-1<<endl;
    }
}

int main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}