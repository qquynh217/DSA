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
        int a[n], l[n], res;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        l[0] = a[0];
        l[1] = max(a[0], a[1]);
        res = l[1];
        for (int i = 2; i < n; i++)
        {
            l[i] = max(l[i - 1], l[i - 2] + a[i]);
            res = max(res, l[i]);
        }
        cout << res << endl;
    }
}