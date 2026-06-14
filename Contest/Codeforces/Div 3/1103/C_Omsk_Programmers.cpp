#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fast ios::sync_with_stdio(false); cin.tie(NULL)
#define all(x) (x).begin(), (x).end()

void solve() {
    int a , b , x ;
    cin>> a >> b >> x;
    int i = 0 ;
    while(a!=b) {
        if(abs(a-b) == 1) {
            i++;
            break;
        }
        else{
            if(a>b) a/=x;
            else {
                b/=x;
            }
            i++ ;
        }
    }
    cout << i <<endl ;
}

int main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}