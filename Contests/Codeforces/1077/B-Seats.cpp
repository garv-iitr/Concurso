#include <bits/stdc++.h>
using namespace std ;

int main() {
    int x ; cin>>x;
    for(int y = 0 ; y < x ; y++) {
        int n;
        string s;
        cin>>n>>s;
        int a[n] ;
        vector<int> one ;
        one.push_back(0);
        for(int i = 1 ; i <= n ; i++) {
            if(s[i-1] == '0'){
                a[i-1] = 0 ;
            }
            else{
                a[i-1] = 1;
                one.push_back(i); 
            }
        }
        one.push_back(n+1);
        int fin_1 = 0;
        for(int i = 0 ; i < n ; i++){
            if(a[i] == 1) {
                fin_1++;
            }
        }
        if(fin_1 == 0) {
            if(n%3 == 0) {
                cout<<n/3<<endl;
            }
            else{
                cout<<n/3 + 1<<endl;
            }
        }
        else{
            for(int i = 0 ; i < one.size() - 1 ; i++) {
                int diff = one[i+1] - one[i] ;
                if(diff > 1){
                    fin_1 += (diff-1)/2 ;
                }
            }
            cout<<fin_1<<endl;
        }
    }
}