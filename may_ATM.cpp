#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int n;
bool ok;
ll s, dem, res;
ll a[35];
ll temp;
void Try(int i)
{
    for (int j = i; j < n; j++)
    {
        temp += a[j];
        dem++;
        if (temp == s)
        {
            ok = true;
            res = min(res, dem);
        }
        else if (temp < s)
            Try(j + 1);
        temp -= a[j];
        dem--;
    }
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        dem = 0;
        res = INT_MAX;
        temp = 0;
        ok = false;
        cin >> n >> s;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Try(0);
        if (ok)
            cout << res << endl;
        else
            cout << -1 << endl;
    }
}