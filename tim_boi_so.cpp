#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
void boiso(int n)
{
    ll a[10000], k = 0, m = 0, res = 0;
    a[0] = 9;
    while (res == 0)
    {
        m += 2;
        a[m - 1] = a[k] * 10;
        if (a[m - 1] % n == 0)
        {
            res = a[m - 1];
            break;
        }
        a[m] = a[m - 1] + 9;
        if (a[m] % n == 0)
        {
            res = a[m];
            break;
        }
        k++;
    }
    cout << res << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        boiso(n);
    }
}