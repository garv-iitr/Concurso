#include <bits/stdc++.h>
using namespace std ;

void printNtimes(int n) {
    if(n<=0) return ;
    cout << "Garv" <<endl ;
    printNtimes(n-1);
    
}

void print1toN(int n) { 
    if(n <= 0) return ;
    print1toN(n-1) ;
    cout << n << " " ; 
}

void printNto1(int n) {
    if(n <= 0) return ;
    cout << n << " " ; 
    printNto1(n-1) ;
}

int main() {
    printNto1(5);

    return 0;
}