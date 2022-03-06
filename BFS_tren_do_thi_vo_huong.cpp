#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int v, e, a[1001][1001], vs[1001] = {0};
vector<int> b;
void BFS(int u)
{
    vector<int> que;
    que.push_back(u);
    while (!que.empty())
    {
        int dau = que[0];
        for (int i = 1; i <= v; i++)
            if (a[dau][i] == 1 && vs[i] == 0)
            {
                vs[i] = 1;
                b.push_back(i);
                que.push_back(i);
            }
        que.erase(que.begin(), que.begin() + 1);
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
        BFS(u);
        for (int i = 0; i < b.size(); i++)
            cout << b[i] << " ";
        cout << endl;
    }
}