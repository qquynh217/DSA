#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int mark[100] = {0};
int res(ll n, ll k, ll j)
{
    if (k % 4 == 1 || k % 4 == 3)
        return 1 + j;
    if (k % 4 == 2)
        return 2 + j;
    return res(n, k / 4, j + 2);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        cout << res(n, k, 0) << endl;
    }
}