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
        ll k, x;
        cin >> n >> k;
        map<ll, ll> a;
        ll b[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> b[i];
            a[b[i]]++;
        }
        ll dem = 0;
        for (ll i = 0; i < n; i++)
        {
            if (a.find(k - b[i]) != a.end())
            {
                dem += a[k - b[i]];
                if (k - b[i] == b[i])
                    dem--;
            }
        }
        cout << dem / 2 << endl;
    }
}