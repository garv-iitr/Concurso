#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin>>x;
    for(int y = 0 ; y < x ; y++) {
        int n ;cin>>n;
        int a[n];for(int i = 0 ; i < n ; i++) {cin>>a[i];}
        map<int , int> count;
        for(int element : a) {
            count[element]++;
        }   
    }
}