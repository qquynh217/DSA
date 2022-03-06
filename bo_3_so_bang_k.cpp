#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
bool FindSum(ll a[], ll n, ll sum)
{
    if (n < 3)
        return false;
    sort(a, a + n);
    for (ll i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            if (binary_search(a + j + 1, a + n, sum - a[i] - a[j]))
                return true;
        }
    }
    return false;
}
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
            cin >> a[i];
        if (FindSum(a, n, k))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}