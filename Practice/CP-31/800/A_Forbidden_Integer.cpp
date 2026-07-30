#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL)
#define all(x) (x).begin(), (x).end()

void solve()
{
    int n, k, x;
    cin >> n >> k >> x;
    if (k == 1)
    {
        cout << "NO\n";
    }
    else if (x != 1)
    {
        cout << "YES\n"
             << n << endl;

        for (int i = 0; i < n; i++)
        {
            cout << 1 << " ";
        }
        cout << endl;
    }
    else if (k > 2 || (k == 2 && !(n & 1)))
    {
        cout << "YES\n"
             << n / 2 << "\n";
        for (int i = 0; i < n / 2 - n % 2; i++)
        {
            cout << 2 << " ";
        }
        if (n % 2 == 1)
        {
            cout << 3 ;
        }
        cout<<"\n";
    }
    else
    {
        cout << "NO\n";
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