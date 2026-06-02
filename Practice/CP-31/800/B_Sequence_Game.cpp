#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fast ios::sync_with_stdio(false); cin.tie(NULL)
#define all(x) (x).begin(), (x).end()

void solve() {
    int n ;
    cin >> n ;
    vector<int> arr ;
    int temp = 0 ;
    cin>>temp ;
    arr.push_back(temp);
    for(int i = 1; i < n; i++){
        cin>>temp ;
        
        if(arr.back() > temp) {
            arr.push_back(temp);
        }
        arr.push_back(temp);
        
    }
    cout << arr.size() <<endl;
    for(int i = 0; i < arr.size(); i++){
        cout<<arr[i] << " " ;
    }
    
    cout<<"\n" ;
}

int main(){
    fast;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}