#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL)
#define all(x) (x).begin(), (x).end()

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    int o, z;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            o = i;
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            z = i;
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (i == o || i == z)
            continue;
        cout << s[i];
    }
    cout << "\n";
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