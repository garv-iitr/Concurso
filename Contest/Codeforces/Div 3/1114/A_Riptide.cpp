#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL)
#define all(x) (x).begin(), (x).end()

void solve()
{
    vector<int> a(3);
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    sort(all(a));
    cout << min(a[2] - a[1], a[1] - a[0]) << "\n";
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