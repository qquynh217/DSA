#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int v, e, s, t, vs[1005], a[1001][1001], truoc[1001];
void DFS(int i)
{
    for (int j = 1; j <= v; j++)
    {
        if (a[i][j] == 1 && vs[j] == 0)
        {
            vs[j] = 1;
            truoc[j] = i;
            DFS(j);
        }
    }
}
void Way()
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
        cin >> v >> e >> s >> t;
        memset(a, 0, sizeof a);
        memset(vs, 0, sizeof vs);
        memset(truoc, 0, sizeof truoc);
        for (int i = 1; i <= e; i++)
        {
            int x, y;
            cin >> x >> y;
            a[x][y] = 1;
        }
        vs[s] = 1;
        DFS(s);
        Way();
        cout << endl;
    }
}