#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fast ios::sync_with_stdio(false); cin.tie(NULL)
#define all(x) (x).begin(), (x).end()

void solve() {
    int n ; cin >> n;
    vector<int> ar(n) ;
    int c = 1 ;
    for(int i = 0; i < n; i++){
        cin>>ar[i] ;
    }
    sort(all(ar));
    for(int i = 1; i < n; i++){
        if(ar[i] != ar[i-1]) break;

        c++;
    }
    if(n==c) {
        cout<<-1<<endl;
        return;
    }
    else{
        cout << c << " " << n-c << endl ;
        for(int i = 0; i < c; i++){
            cout<<ar[i] << " " ;
        }
        cout<<endl;
        for(int i = c; i < n; i++){
            cout<<ar[i] << " " ;
        }
        cout<<endl;
    }
}

int main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}