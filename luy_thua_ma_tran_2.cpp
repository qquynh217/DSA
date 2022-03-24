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
Data Pow(Data A, ll k)
{
    if (k == 1)
        return A;
    if (k % 2 == 1)
        return Plus(A, Pow(Plus(A, A), k / 2));
    return Pow(Plus(A, A), k / 2);
}
ll Sum(Data A)
{
    Data mu = Pow(A, k);
    ll res = 0;
    for (int i = 0; i < n; i++)
        res = (res + mu.a[i][n - 1]) % mod;
    return res;
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
        cout << Sum(A) << endl;
    }
}