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
    vector<int> ar(n);
    int o = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        if (ar[i] == 1)
            o++;
    }
    int m = n - o;
    if (!(m & 1) && (o - m) >= 0)
    {
        cout << 0 << "\n";
    }
    else if (o - m < 0)
    {
        int c = m - o;
        c = (c / 2 + c % 2);
        if ((m - c) & 1)
            c++;
        cout << c << "\n";
    }
    else
    {
        cout << 1 << "\n";
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