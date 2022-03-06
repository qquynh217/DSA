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
        int a[100], n, sum, k;
        cin >> n >> k;
        int t = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            t += a[i];
        }
        sort(a, a + n);
        int t1 = 0, t2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (i < k)
                t1 += a[i];
            if (i < n - k)
                t2 += a[i];
        }
        int max = (abs(t - 2 * t1) > abs(t - 2 * t2)) ? abs(t - 2 * t1) : abs(t - 2 * t2);
        cout << max << endl;
    }
}