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
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        ll t = 0;
        for (int i = 0; i < n; i++)
        {
            int x = a[i] * i % P;
            t = (t + x) % P;
        }
        cout << t << endl;
    }
}