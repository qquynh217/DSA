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
        int n, vt = -1;
        cin >> n;
        ll a[n], s[n];
        ll t = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            t += a[i];
            if (i == 0)
                s[i] = a[i];
            else
                s[i] = s[i - 1] + a[i];
        }
        for (int i = 1; i < n - 1; i++)
        {
            if (s[i] - a[i] == t - s[i])
            {
                vt = i + 1;
                break;
            }
        }
        cout << vt << endl;
    }
}