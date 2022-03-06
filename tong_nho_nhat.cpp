#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
ll tong(ll a[], int n)
{
    ll t1 = 0, t2 = 0;
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            t1 = a[i] + t1 * 10;
        else
            t2 = a[i] + t2 * 10;
    }
    return t1 + t2;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll a[30];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cout << tong(a, n) << endl;
    }
}