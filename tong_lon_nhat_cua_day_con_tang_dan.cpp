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
        int a[1005], f[1005], res;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        f[0] = a[0];
        res = a[0];
        for (int i = 1; i < n; i++)
        {
            f[i] = a[i];
            for (int j = 0; j < i; j++)
                if (a[i] > a[j])
                    f[i] = max(f[i], a[i] + f[j]);
            if (f[i] > res)
                res = f[i];
        }
        cout << res << endl;
    }
}