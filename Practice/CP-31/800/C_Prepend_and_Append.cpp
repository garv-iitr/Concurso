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
    vector<int> ar(n);
    for (int i = 0; i < n; i++)
    {
        ar[i] = s[i] - 48 ;
    }
    int c = 0;
    for (int i = 0; i < n / 2; i++)
    {
        if (ar[i] ^ ar[n - i - 1])
        {
            c += 2;
        }
        else
        {
            break;
        }
    }
    cout << n - c << "\n";
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