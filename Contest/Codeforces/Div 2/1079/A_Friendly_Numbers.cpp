#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fast ios::sync_with_stdio(false); cin.tie(NULL)
#define all(x) (x).begin(), (x).end()

int dig_sum(int n) {
    if(n == 0) {
        return 0;
    }
    else{
        int unit_digit = n % 10;
        n /= 10 ;
        return dig_sum(n) + unit_digit ;
    }
}

void solve() {
    int x ;
    cin>>x;
    int max = 9 * (1+log10(x)) ;
    int count = 0 ;
    for(int i = 0 ; i <= max ; i++) {
        if(i == dig_sum(x+i) )
            count++;
    }
    cout<<count<<endl;
}

int main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}