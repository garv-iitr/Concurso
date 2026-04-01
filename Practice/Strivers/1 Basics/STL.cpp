#include <bits/stdc++.h>
using namespace std ;


void unorderedSet() {
    unordered_set<int> s ;

    for(int i = 0 ; i < 10 ; i++) {
        s.insert(i) ;
    }
    for(auto it = s.begin() ; it != s.end() ; it++){
        cout<< *it << " " ;
    }
    cout<<endl;

}
int main() {
    unorderedSet();
    return 0;
}