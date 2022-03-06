#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int n, k, a[200], b[200];
int dem = 0;
void Try(int i, int vt)
{
    for (int j = vt; j <= n; j++)
    {
        if (i == 1 || a[j] > b[i - 1])
        {
            b[i] = a[j];
            if (i == k)
                dem++;
            else
                Try(i + 1, j + 1);
        }
    }
}
int main()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    Try(1, 1);
    cout << dem;
}