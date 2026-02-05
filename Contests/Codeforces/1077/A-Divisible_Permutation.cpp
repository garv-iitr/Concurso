#include<bits/stdc++.h>
using namespace std ;

int main() {
    int x;cin>>x;
    for(int y = 0 ; y < x ; y++) {
        int n ; cin>>n;
        int mid_o;
        if(n%2 == 0){
            mid_o = n/2;
        }
        else{
            mid_o = n/2 + 1;
        }
        int mid_e = mid_o + 1;
        for(int i = 1 ; i <= n ; i++) {
            if(i%2 == 1) {
                cout<<mid_o<<" ";
                mid_o--;
            }
            else{
                cout<<mid_e<<" ";
                mid_e++;
            }
        }
        cout<<endl;
    }
}