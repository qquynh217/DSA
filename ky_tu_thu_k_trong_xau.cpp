#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int res(ll k, ll j)
{
    if (k % 4 == 1 || k % 4 == 3)
        return 0 + j;
    if (k % 4 == 2)
        return 1 + j;
    return res(k / 4, j + 2);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        cout << (char)('A' + res(k, 0)) << endl;
    }
}