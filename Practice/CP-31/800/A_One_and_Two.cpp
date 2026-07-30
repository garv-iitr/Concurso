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
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        if (ar[i] - 1)
            c++;
    }
    if (c & 1)
    {
        cout << -1 << "\n";
    }
    else if (!c)
    {
        cout << 1 << "\n";
    }
    else
    {
        int t = c / 2, i;
        for (i = 0; i < n && t; i++)
        {
            if (ar[i] - 1)
                t--;
        }
        cout << i << "\n";
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