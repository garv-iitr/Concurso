#include <bits/stdc++.h>
using namespace std;

int main() {
int x ;
cin>>x;
for(int y = 0 ; y < x ; y++){
    int n;
    cin>>n;
    int a[n];
    int flag = 0;
    for(int i = 0 ; i < n ; i++) {
        cin>>a[i];
        for(int j = 0 ; j < i ; j++) {
            if(a[j] == a[i]) {
                flag = 1;
            }
        }
    }
    if(flag || a[0]!=1) {
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }

}

}