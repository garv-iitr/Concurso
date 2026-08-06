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
    string s;
    cin >> s;
    int c = 1;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
            c--;
        c++;
    }
    int d = 0;

    for (int i = 1; i < n - 1; i++)
    {
        if (s[i - 1] == s[i + 1] && s[i] != s[i - 1])
        {
            d = min(d, -2);
        }
        else if (s[i] != s[i - 1] && s[i] != s[i + 1] && s[i - 1] != s[i + 1])
        {
            d = min(d, -1);
        }
    }
    cout << c + d << "\n";
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