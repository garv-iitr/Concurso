#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL)
#define all(x) (x).begin(), (x).end()

void solve()
{
    int n, m;
    cin >> n >> m;
    if (m > (n / 2))
    {
        cout << "NO\n";
        return;
    }
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(all(a));

    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    sort(all(b));
    if ((a[0] > b[0]) || (a[n - 1] < b[m - 1]))
    {
        cout << "NO\n";
    }
    else
    {
        cout << "\n";
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