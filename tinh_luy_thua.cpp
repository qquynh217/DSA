#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9 + 7;
ll power(ll a, ll b)
{
    if (b == 0)
        return 1;
    if (b == 1)
        return a % mod;
    if (b % 2 == 0)
        return power(a * a % mod, b / 2) % mod;
    return power(a * a % mod, b / 2) * a % mod;
}
int main()
{
    ll a, b;
    do
    {
        cin >> a >> b;
        if (!(a == 0 && b == 0))
        {
            cout << power(a, b) << endl;
        }
    } while (!(a == 0 && b == 0));
}