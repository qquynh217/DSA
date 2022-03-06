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
        ll n, x;
        cin >> n >> x;
        ll a;
        ll vt = -1;
        for (ll i = 0; i < n; i++)
        {
            cin >> a;
            if (a <= x)
                vt = i + 1;
        }
        cout << vt << endl;
    }
}