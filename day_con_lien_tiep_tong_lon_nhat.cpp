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
        int res = -200;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            res = max(res, a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            int s = a[i];
            for (int j = i + 1; j < n; j++)
            {
                s += a[j];
                res = max(res, s);
            }
        }
        cout << res << endl;
    }
}
