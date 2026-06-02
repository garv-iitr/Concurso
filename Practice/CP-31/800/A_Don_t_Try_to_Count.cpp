#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fast ios::sync_with_stdio(false); cin.tie(NULL)
#define all(x) (x).begin(), (x).end()

void solve() {
    int n , m; 
    cin>>n>>m; 
    string x , s ;
    cin >> x >> s ;
    int flag = 0 , i; 
    for(i = 0; i < 6; i++){
        if(x.find(s) != string::npos) {
            flag = 1 ;
            break ;
        }
        x += x ;
    }    
    if(flag) {
        cout<<i<<endl ;
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