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
        ll n, k, res;
        cin >> n >> k;
        if (k > n)
            res = 0;
        else
        {
            res = 1;
            for (ll i = n; i >= n - k + 1; i--)
                res = res * i % P;
        }
        cout << res << endl;
    }
}