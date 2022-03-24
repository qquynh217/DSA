#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9 + 7;
ll n, k;
struct Data
{
    ll a[15][15];
};
Data Plus(Data x, Data y)
{
    Data t;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            t.a[i][j] = 0;
            for (int l = 0; l < n; l++)
            {
                t.a[i][j] = (t.a[i][j] + (x.a[i][l] * y.a[l][j]) % mod) % mod;
            }
        }
    }
    return t;
}
Data Pow(Data a, ll k)
{
    if (k == 1)
        return a;
    if (k % 2 == 1)
        return Plus(a, Pow(Plus(a, a), k / 2));
    return Pow(Plus(a, a), k / 2);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Data A;
        cin >> n >> k;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> A.a[i][j];
        Data res = Pow(A, k);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                cout << res.a[i][j] << " ";
            cout << endl;
        }
    }
}