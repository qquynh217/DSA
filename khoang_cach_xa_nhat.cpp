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
        int a[100000];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int ans = 0;
        for (int i = 0; i < n - 1; i++)
        {
            int res = 0;
            int it = upper_bound(a + i, a + n, a[i]) - a;
            int vt = n - 1;
            if (it < n)
                while (vt >= it)
                {
                    if (a[vt] > a[i] && vt - i > res)
                    {
                        res = vt - i;
                        break;
                    }
                    vt--;
                }
            ans = max(ans, res);
        }
        if (ans == 0)
            cout << -1 << endl;
        else
            cout << ans << endl;
    }
}