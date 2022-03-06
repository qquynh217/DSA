#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 123456789
ll power(ll a, ll b)
{
    ll res = 1;
    while (b > 0)
    {
        if (b % 2 != 0)
            res = (res % mod * a % mod) % mod;
        a = (a % mod * a % mod) % mod;
        b /= 2;
    }
    return res;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << power(2, n - 1) << endl;
    }
}