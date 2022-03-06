#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
bool cp(ll s)
{
    ll i = sqrt(s);
    if (i * i == s)
        return true;
    return false;
}
bool pytago(ll a[], int n)
{
    if (n < 3)
        return false;
    for (int i = 0; i < n - 2; i++)
        for (int j = i + 1; j < n - 1; j++)
        {
            ll s = a[i] * a[i] + a[j] * a[j];
            if (!cp(s))
                continue;
            else
            {
                if (binary_search(a + j + 1, a + n, sqrt(s)))
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
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        if (pytago(a, n))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}