#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
ll POW(ll n, ll k)
{
    if (k == 0)
        return 1;
    if (k == 1)
        return n;
    if (k % 2 == 0)
        return POW(n * n % P, k / 2) % P;
    else
        return n * POW(n * n % P, k / 2) % P;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        cout << POW(n, k) << endl;
    }
}
