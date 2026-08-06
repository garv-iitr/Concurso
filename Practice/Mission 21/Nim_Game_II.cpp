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
    vector<ll> ar(n);
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        ar[i] %= 4;
        x ^= ar[i];
    }
    if (x)
        cout << "first\n";
    else
        cout << "second\n";
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