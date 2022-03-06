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
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        ll dem = 0;
        for (int i = 0; i < n - 1; i++)
        {
            int it = lower_bound(a + i + 1, a + n, a[i] + k) - a;
            dem += it - i - 1;
        }
        cout << dem << endl;
    }
}