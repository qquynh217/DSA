#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int len;
void chung(ll a[], ll b[], int n, int m, ll uni[])
{
    int d1 = 0, d2 = 0;
    int k = 0;
    while (d1 < n && d2 < m)
    {
        if (a[d1] == b[d2])
        {
            uni[k++] = a[d1];
            d1++;
            d2++;
        }
        else if (a[d1] < b[d2])
            d1++;
        else
            d2++;
    }
    len = k;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n1, n2, n3;
        cin >> n1 >> n2 >> n3;
        ll a[n1], b[n2], c[n3];
        len = 0;
        for (int i = 0; i < n1; i++)
            cin >> a[i];
        for (int i = 0; i < n2; i++)
            cin >> b[i];
        for (int i = 0; i < n3; i++)
            cin >> c[i];
        int n = max(max(n1, n2), n3);
        ll u1[n], u2[n];
        chung(a, b, n1, n2, u1);
        int k = len;
        chung(c, u1, n3, k, u2);
        if (len > 0)
            for (int i = 0; i < len; i++)
                cout << u2[i] << " ";
        else
            cout << -1;
        cout << endl;
    }
}