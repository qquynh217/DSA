#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int v, e, s, t;
int a[1005][1005], truoc[1005], vs[1005];
void BFS(int u)
{
    queue<int> q;
    q.push(u);
    while (!q.empty())
    {
        int top = q.front();
        for (int i = 1; i <= v; i++)
        {
            if (a[top][i] && !vs[i])
            {
                truoc[i] = top;
                vs[i] = 1;
                q.push(i);
            }
        }
        q.pop();
    }
}
void Way()
{
    if (truoc[t] == 0)
    {
        cout << -1;
        return;
    }
    int x = t;
    vector<int> res;
    res.push_back(t);
    while (truoc[x] != s)
    {
        res.push_back(truoc[x]);
        x = truoc[x];
    }
    res.push_back(s);
    for (int i = res.size() - 1; i >= 0; i--)
        cout << res[i] << ' ';
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        memset(a, 0, sizeof a);
        memset(truoc, 0, sizeof truoc);
        memset(vs, 0, sizeof vs);
        cin >> v >> e >> s >> t;
        for (int i = 0; i < e; i++)
        {
            int x, y;
            cin >> x >> y;
            a[x][y] = a[y][x] = 1;
        }
        vs[s] = 1;
        BFS(s);
        Way();
        cout << endl;
    }
}