#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        ll dem = 0;
        for (ll i = 0; i < n - 1; i++)
        {
            ll temp = a[i];
            ll pos = lower_bound(a + i + 1, a + n, temp + k) - a;
            // cout << i << '-' << pos << ' ';
            dem = dem + (pos - i - 1);
        }
        cout << dem << endl;
    }
}