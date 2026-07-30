#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fast ios::sync_with_stdio(false); cin.tie(NULL)
#define all(x) (x).begin(), (x).end()

void solve() {
    int a , b , c ; cin >> a >> b >> c;
    int m = -1 ;
    
    int u = a*b + c ;
    if (m<u) m = u; 
    
    int v = a + b + c ;
    if (m<v) m = v ;

    int w = a + b * c ;
    if(m<w) m = w ;
    
    int x = a * ( b + c ) ;
    if(m<x) m = x ;
    
    int y = a * b * c ;
    if(m<y) m = y ;
    
    int z = ( a + b ) * c ;
    if(m<z) m = z ;
    
    cout << m ;
    
}

int main(){
    fast;
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}