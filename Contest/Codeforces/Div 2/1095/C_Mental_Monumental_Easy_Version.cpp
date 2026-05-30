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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    bool tt = false;
    int ans = n;
    sort(v.begin(), v.end());
    if ((v[n - 1]) & 1)
    {
        int checky = (v[n - 1] - 1) / 2;
        if (checky < n)
        {
            ans = checky;
        }
    }
    else
    {
        int checky = v[n - 1] / 2 - 1;
        if (checky < n)
        {
            ans = checky;
        }
    }
    cout << ans << "\n";
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