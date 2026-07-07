#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fast ios::sync_with_stdio(false); cin.tie(NULL)
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;cin>>n;
    vector<int> ar(n,0);
    int a = 0, b = 0 ;
    int c1 = 0 ;
    for(int i = 0; i < n; i++){
        cin>>ar[i] ;
    }
    int i = 0;
    for(; i < n - 1; i++){
        if(ar[i]==1) c1++ ;
        if(c1 >= (i+1)/2 && c1) {
            a = 1;
            i++;
            break;
        }
    }
    int c2 = 0 ;
    for(int j = 0 ; j < n-1-i ; j++){
        if(ar[j+i] == 1 || ar[j+i] == 2) c2++ ;
        if(c2 >= (j+1)/2 && c2) {
            b = 1 ;
            break;
        }
    }
    if(a&b) {
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