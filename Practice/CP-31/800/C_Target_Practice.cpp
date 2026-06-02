#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fast ios::sync_with_stdio(false); cin.tie(NULL)
#define all(x) (x).begin(), (x).end()

void solve() {
    vector<vector<char>> tar(10 , vector<char> (10 , 0)) ;
    int tot = 0 ;
    int temp;
    for(int i = 0; i < 10; i++){
        for(int j = 0 ; j < 10 ; j++) {
            cin >> tar[i][j] ;
            if(tar[i][j] == '.') temp = 0;
            else {
                temp = min ({i , j , 9 - i , 9 - j}) + 1;
            }
            tot += temp ;
        }
    }
    cout<<tot<<endl ;
}

int main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}