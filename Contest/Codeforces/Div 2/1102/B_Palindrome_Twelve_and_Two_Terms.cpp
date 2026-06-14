#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fast ios::sync_with_stdio(false); cin.tie(NULL)
#define all(x) (x).begin(), (x).end()

bool ifPalindrome(ll k) {
    if(k<0) return false ;
    ll temp = k ;
    ll rev = 0 ;
    while(temp>0) {
        int last = temp%10 ;
        rev = (rev*10) + last ;
        temp/=10;
    }
    return k == rev ;
}

void solve() {
    ll n;
    cin>>n ;
    ll a, b ;
    for(a = 0; a <= n; a+=12){
        b = n - a; 
        if(ifPalindrome(b)) {
            cout << b << " " << a << endl ;
            return ;
        }
    }
    cout<<-1<<endl;
}

int main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}