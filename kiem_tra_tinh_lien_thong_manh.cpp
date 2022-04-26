#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int v, e, a[1005][1005];
int vs[1005];
void DFS(int u)
{
    for (int i = 1; i <= v; i++)
        if (a[u][i] && !vs[i])
        {
            vs[i] = 1;
            DFS(i);
        }
}
bool tplienthong(int u)
{
    memset(vs, 0, sizeof vs);
    vs[u] = 1;
    DFS(u);
    for (int i = 1; i <= v; i++)
        if (!vs[i])
            return false;
    return true;
}
bool check()
{
    for (int i = 1; i <= v; i++)
    {
        if (!tplienthong(i))
            return false;
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        memset(a, 0, sizeof a);
        cin >> v >> e;
        for (int i = 0; i < e; i++)
        {
            int x, y;
            cin >> x >> y;
            a[x][y] = 1;
        }
        if (check())
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}