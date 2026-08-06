#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL)
#define all(x) (x).begin(), (x).end()

bool isd(int a, int b)
{
    int oa = a & 1;
    int ob = b & 1;
    if (oa ^ ob)
        return false;
    return true;
}
void solve()
{
    int n;
    cin >> n;
    vector<int> ar(n);
    int c = 0;
    cin >> ar[0];
    for (int i = 1; i < n; i++)
    {
        cin >> ar[i];
        if (isd(ar[i - 1], ar[i]))
            c++;
    }
    cout << c << "\n";
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