#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int n, m;
int a[1001][1001], vs[1001], truoc[1001];
void DFS(int i)
{
    for (int j = 1; j <= n; j++)
        if (a[i][j] == 1 && vs[j] == 0)
        {
            vs[j] = 1;
            truoc[j] = i;
            DFS(j);
        }
}
void Way(int x, int y)
{
    if (truoc[y] != 0)
        cout << "YES\n";
    else
        cout << "NO\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        memset(a, 0, sizeof a);
        for (int i = 0; i < m; i++)
        {
            int row, col;
            cin >> row >> col;
            a[row][col] = a[col][row] = 1;
        }
        int q, x, y;
        cin >> q;
        for (int i = 0; i < q; i++)
        {
            memset(truoc, 0, sizeof truoc);
            memset(vs, 0, sizeof vs);
            cin >> x >> y;
            DFS(x);
            Way(x, y);
        }
    }
}