#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int a[1001][1001], vs[1001], truoc[1001];
void BFS(int u, int v)
{
    vector<int> que;
    que.push_back(u);
    while (!que.empty())
    {
        int top = que[0];
        for (int j = 1; j <= v; j++)
        {
            if (a[top][j] == 1 && vs[j] == 0)
            {
                que.push_back(j);
                vs[j] = 1;
                truoc[j] = top;
            }
        }
        que.erase(que.begin(), que.begin() + 1);
    }
}
void Way(int s, int t)
{
    if (truoc[t] == 0)
    {
        cout << -1;
        return;
    }
    vector<int> b;
    int i = t;
    b.push_back(t);
    while (truoc[i] != s)
    {
        b.push_back(truoc[i]);
        i = truoc[i];
    }
    b.push_back(s);
    for (int i = b.size() - 1; i >= 0; i--)
        cout << b[i] << ' ';
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int v, e, dau, cuoi;
        memset(a, 0, sizeof a);
        memset(vs, 0, sizeof vs);
        memset(truoc, 0, sizeof truoc);
        cin >> v >> e >> dau >> cuoi;
        for (int i = 1; i <= e; i++)
        {
            int x, y;
            cin >> x >> y;
            a[x][y] = 1;
        }
        vs[dau] = 1;
        BFS(dau, v);
        Way(dau, cuoi);
        cout << endl;
    }
}