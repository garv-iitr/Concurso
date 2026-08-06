#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL)
#define all(x) (x).begin(), (x).end()

bool isd(int n, int a, int b)
{
    if (!a && !b && n > 1)
        return true;
    else if (n == 1 && a < 2 && b < 2)
    {
        return a & b;
    }
    else if (n == 1)
        return false;
    else if (n == a && n == b)
        return true;
    else if (n < a + b)
        return false;
    else if (a > b)
        return isd(n - 1, a - 1, b);
    else
        return isd(n - 1, a, b - 1);
}
void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    if (isd(n, a, b))
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