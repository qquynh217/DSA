#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int n, k, a[20], b[20];
void in()
{
    for (int i = 1; i <= k; i++)
        cout << b[i] << ' ';
    cout << endl;
}
void Try(int i, int l)
{
    for (int j = i; j <= n - k + l; j++)
    {
        b[l] = a[j];
        if (l == k)
            in();
        else
            Try(j + 1, l + 1);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        sort(a + 1, a + n + 1);
        Try(1, 1);
    }
}