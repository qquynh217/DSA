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
        ll n;
        ll k;
        cin >> n >> k;
        ll a[n];
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        ll dem = 0;
        for (ll i = 0; i < n - 2; i++)
        {
            for (ll j = i + 1; j < n - 1; j++)
            {
                ll s = a[i] + a[j];
                if (k - s <= a[j + 1])
                    break;
                ll id = lower_bound(a + j + 1, a + n, k - s) - a;
                dem += id - j - 1;
            }
        }
        cout << dem << endl;
    }
}