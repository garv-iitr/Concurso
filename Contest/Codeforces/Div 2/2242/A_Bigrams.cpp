#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fast ios::sync_with_stdio(false); cin.tie(NULL)
#define all(x) (x).begin(), (x).end()

void solve() {
    int n ; cin >> n ;
    vector<int> a(n,0);
    int flag = 0 , c = 0 ;
    for(int i = 0; i < n; i++){
        cin>>a[i];
        if(a[i]>2) {
            flag = 1;
        }
        if(a[i] == 2) c++;
    }
    if(flag || c>1) {
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
}

int main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}