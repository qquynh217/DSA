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
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int res = 0, f[n];
        f[0] = a[0];
        f[1] = max(a[0], a[1]);
        for (int i = 2; i < n; i++)
        {
            f[i] = max(f[i - 2] + a[i], f[i - 1]);
            res = max(res, f[i]);
        }
        cout << res << endl;
    }
}