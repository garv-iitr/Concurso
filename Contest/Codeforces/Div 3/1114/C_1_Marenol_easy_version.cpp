#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL)
#define all(x) (x).begin(), (x).end()

void solve()
{
    string a, b;
    cin >> a >> b;
    int n = a.size() ;
    int flag = 1 ;
    int a1 = 0  ,b1 = 0 ;
    for(int i = 0; i < n; i++){
        if(a[i]) a1++ ;
        if(b[i]) b1++ ;
        if(a[i] != b[i]) flag = 0 ;
    }
    if(flag) {
        cout<<"YES\n" ;
        return; 
    }
    if(a1!=b1) {
        cout<<"NO\n" ;
        return ;
    }

}

int main()
{
    fast;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}