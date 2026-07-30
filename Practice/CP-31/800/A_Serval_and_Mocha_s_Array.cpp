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
    vector<int> ar(n), dr(n);
    cin >> ar[0] >> ar[1];
    int g = gcd(ar[0], ar[1]);
    int flag = 0;
    for (int i = 2; i < n; i++)
    {
        cin >> ar[i];
        g = gcd(g, ar[i]);
    }
    if (g > n)
    {
        cout << "No\n";
        return;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (gcd(ar[i], ar[j]) <= 2)
            {
                flag = 1;
                break;
            }
        }
        if (flag)
        {
            break;
        }
    }
    if (flag)
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
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