#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int v, e, a[1001][1001], vs[1001] = {0};
vector<int> b;
void DFS(int i)
{
    for (int j = 1; j <= v; j++)
    {
        if (a[i][j] == 1 && vs[j] == 0)
        {
            vs[j] = 1;
            b.push_back(j);
            DFS(j);
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int u;
        cin >> v >> e >> u;
        memset(a, 0, sizeof a);
        memset(vs, 0, sizeof vs);
        b.clear();
        for (int i = 1; i <= e; i++)
        {
            int x, y;
            cin >> x >> y;
            a[x][y] = a[y][x] = 1;
        }
        vs[u] = 1;
        b.push_back(u);
        DFS(u);
        for (int i = 0; i < b.size(); i++)
            cout << b[i] << " ";
        cout << endl;
    }
}