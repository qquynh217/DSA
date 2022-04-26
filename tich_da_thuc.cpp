#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int a[101], b[101];
int n, m;
void Plus()
{
    int res[10001] = {0};
    int len = max(n, m);
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            res[i + j] = res[i + j] + (a[i] * b[j]);
        }
    }
    for (int i = 0; i < m + n - 1; i++)
    {
        cout << res[i] << ' ';
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        memset(a, 0, sizeof a);
        memset(b, 0, sizeof b);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];
        Plus();
        cout << endl;
    }
}