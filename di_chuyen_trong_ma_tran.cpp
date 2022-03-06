#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int n, m, dem;
int a[105][105];
void dichuyen(int i, int j)
{
    if (i == m - 1 && j == n - 1)
        dem++;
    for (int k = 0; k <= 1; k++)
    {
        if (k == 0 && i + 1 < m)
            dichuyen(i + 1, j);
        if (k == 1 && j + 1 < n)
            dichuyen(i, j + 1);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> m >> n;
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                cin >> a[i][j];
        dem = 0;
        dichuyen(0, 0);
        cout << dem << endl;
    }
}