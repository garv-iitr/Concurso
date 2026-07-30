#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fast ios::sync_with_stdio(false); cin.tie(NULL)
#define all(x) (x).begin(), (x).end()

void solve() {
    int n , k ; cin >> n >> k;
    vector<int> ar(n) ;
    int ev = 0 ;
    for(int i = 0; i < n; i++){
        cin >> ar[i] ;
        if(!(ar[i]&1)) ev++;
        ar[i] %= k ;
    }
    sort(all(ar)) ;
    if(!ar[0] || (!(k&1) && ev>=2) || (k==2 && ev==1)) cout<<0<<endl;
    else if (k == 4) {
        if(ev==1) {
            cout<<1<<endl;
        }
        else if (ar[n-1] == 3) {
            cout<<1<<endl;
        }
        else if (ar[0] == 1 && ar[1] == 1) cout<<2<<endl;
    }
    else{
        cout<<k-ar[n-1]<<endl;
    }
}

int main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}