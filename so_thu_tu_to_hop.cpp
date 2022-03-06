#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int n, k, a[16], b[16], res, dem;
bool sosanh()
{
    for (int i = 1; i <= k; i++)
    {
        if (a[i] != b[i])
            return false;
    }
    return true;
}
void tohop(int i)
{
    for (int j = b[i - 1] + 1; j <= n - k + i; j++)
    {
        b[i] = j;
        if (i == k)
        {
            if (sosanh() == false)
                dem++;
            else
                res = dem;
        }
        else
            tohop(i + 1);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        for (int i = 1; i <= k; i++)
            cin >> a[i];
        dem = 1;
        tohop(1);
        cout << res << endl;
    }
}