#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fast ios::sync_with_stdio(false); cin.tie(NULL)
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;cin>>n ;
    vector<int> arr(n) ;
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int a=0 , b=0 , ca=0 , cb=0 ;
    int flag = 1 ;
    for(int i = 0; i < n; i++){
        if(ca!=0 && cb!= 0 && (arr[i]!=a && arr[i]!=b)) {
            flag = 0;
            // cout<<1;
        }
        else if(ca!=0 && arr[i] == a) {
            ca++;
            // cout<<2;
        }

        else if(arr[i] == b) {
            ++cb;
            // cout<<3;
        }

        else if(ca!=0 && cb == 0 && arr[i] != a) {
            b = arr[i] ;
            cb++ ;
            // cout<<4;
        }
        else {
            a = arr[i]; 
            ca++;
            // cout<<5;
        }
    }
    if(cb&&flag && (ca == (n+1)/2 || ca==n/2)) {
        cout<<"Yes"<<endl;
    }
    else if (ca == n) {
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No" <<endl;
    }
}

int main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}