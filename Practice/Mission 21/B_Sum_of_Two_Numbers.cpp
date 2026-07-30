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
    int d = log10(n) + 1;
    int a = 0, flag = 1;
    int temp = n ;
    for (int i = 0; i < d, temp!=0; i++)
    {
        int p = pow(10,i) ;
        int o = temp % 10;
        if (!(o & 1))
            a += ((o / 2) * p);
        else if (flag)
        {
            a += (((o - 1) / 2) * p);
            flag = 0;
        }
        else{
            a += (((o + 1) / 2) * p);
            flag = 1;
        }
        temp/=10;
    }
    cout << a << " " << n - a <<endl;
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