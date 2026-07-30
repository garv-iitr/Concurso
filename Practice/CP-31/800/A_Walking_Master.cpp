#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL)
#define all(x) (x).begin(), (x).end()

void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int s = 0;
    if (d < b || d - b < c - a)
    {
        cout << -1 << "\n";
    }
    else {
        s = d - b ;
        a += s ;
        s += a - c ;
        cout<< s <<"\n";
    }

}

int main()
{
    fast;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}