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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(all(a), greater<int>());
    if (a[0] == a[n - 1])
    {
        cout << "NO\n";
    }
    else
    {
        if (a[0] == a[1])
        {
            a[0] = a[0] + a[n - 1];
            a[n - 1] = a[0] - a[n - 1];
            a[0] = a[0] - a[n - 1];
        }
        cout << "YES\n";
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
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