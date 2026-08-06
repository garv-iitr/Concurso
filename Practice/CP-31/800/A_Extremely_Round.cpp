#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL)
#define all(x) (x).begin(), (x).end()

void solve()
{
    int n;
    cin >> n;
    cout << 9 * (int)log10(n) + ((int)n / (int)pow(10, (int)log10(n))) << "\n";
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