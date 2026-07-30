#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fast ios::sync_with_stdio(false); cin.tie(NULL)
#define all(x) (x).begin(), (x).end()

int prm = 1000001 ;
vector<bool> ip(prm+1,true) ;

void isPrime() {
        ip[0] = ip[1] = false ;
        for(int i = 2; i <= prm; i++) {
           if(ip[i] && (ll) i * i <= prm) {
              for(int j = i * i ; j <= prm ; j+=i) 
                ip[j] = false; 
           }
        }
        return;
}

bool tPrime(ll a) {
    ll temp = sqrt(a) ;
    if(temp * temp != a) return false ;
    if(ip[temp]) return true ;
    return false ;
}
void solve() {
    int n ; cin >> n;
    isPrime();
    for(int i = 0; i < n; i++){
        ll temp ;
        cin>>temp; 
        if(tPrime(temp)) cout<<"YES\n" ;
        else  cout<<"NO\n" ;
    }
}

int main(){
    fast;
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}