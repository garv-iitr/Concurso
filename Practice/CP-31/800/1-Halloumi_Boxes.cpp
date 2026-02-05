#include <bits/stdc++.h>
using namespace std;

int main() {
int x ;
cin>>x;
for(int y = 0 ; y < x ; y++){
    int n ,k ;
    cin >> n >> k ;
    int a[n];
    int flag = 1; 
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if(i>0 && a[i-1] > a[i]){
            flag = 0;
        }
    }
    if(k==1 && flag == 0){
        cout<<"NO\n" ;
    }
    else{
        cout<<"YES\n";
    }

}
}