#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
ll len[93];
void dodai()
{
    len[1] = 1;
    len[2] = 1;
    for (int i = 3; i < 93; i++)
        len[i] = len[i - 1] + len[i - 2];
}
char Try(ll k, ll n)
{
    if (n == 1)
        return '0';
    if (n == 2)
        return '1';
    if (k <= len[n - 2])
        return Try(k, n - 2);
    else
        return Try(k - len[n - 2], n - 1);
}
int main()
{
    int t;
    cin >> t;
    dodai();
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        cout << Try(k, n) << endl;
    }
}