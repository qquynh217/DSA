#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9 + 7;
ll POW(ll a, ll b)
{
    if (b == 1)
        return a % mod;
    long long x = POW(a, b / 2);
    if (b % 2 == 1)
        return (x * x % mod) * a % mod;
    return x * x % mod;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll x = n, r = 0;
        while (x > 0)
        {
            r = r * 10 + x % 10;
            x /= 10;
        }
        cout << POW(n, r) << endl;
    }
}