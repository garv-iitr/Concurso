#include <bits/stdc++.h>
using namespace std ;

int main() {
    int x;
    cin>>x;
    for(int y=0; y< x ; y++) {
        int n , k = 0;
        cin>>n;
        char c[n];
        int a[n] ;
        int j = 0;
        for(int i = 0 ; i < n ; i++){
            cin>>c[i];
            if(c[i] == '.'){
                k++;
                a[j] = i;
                j++;
            }
        }
        int max_cons = 1 , cons = 1 ;
        for(int i = 0 ; i < k ; i++){
            if(a[i+1] == a[i] + 1){
                cons++;
                if(cons>=max_cons){
                max_cons = cons;
                }
            }
            else{
                cons = 1;
            }

            
        }
        if(max_cons >= 3){
            cout<<2<<"\n";
        }

        else{
            cout<<k<<"\n";
        }
    }
}