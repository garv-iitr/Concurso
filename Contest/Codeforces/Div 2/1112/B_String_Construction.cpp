#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fast ios::sync_with_stdio(false); cin.tie(NULL)
#define all(x) (x).begin(), (x).end()

void solve() {
    int n , k ;
    cin>>n>>k;
    if(k > n - 2) {
        cout<<-1<<endl;
        return ;
    }
    string s ;
    for(int i = 0 ; i < n - n / 2 ; i++) {
        s.push_back('1');
    }
    for(int i = 0; i < n/2; i++){
        s.push_back('0');
    }
    int pb = n - 2 - k ;
    for(int i = 0; i < pb/2; i++){
        s.insert(s.end() - (2*i + 1) ,'1') ;
        s.erase(0,1);   
    }
    if(pb&1) {
        s.push_back('1');
        s.erase(0,1);   
    }
    cout<<s<<endl;

}

int main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}