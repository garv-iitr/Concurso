#include <bits/stdc++.h>
using namespace std;

int main() {
int x;
cin>>x;
for(int y = 0 ; y < x ; y++) {
    int n;
    cin>>n;
    if(n%3 == 0) {
        cout<<"Second"<<endl;
    }
    else{
        cout<<"First"<<endl;
    }
}
}