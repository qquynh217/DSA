#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int n, v, a[1005][1005], vs[1005];
struct Canh
{
    int dau, cuoi;
} temp;
vector<Canh> e;
void DFS(int i)
{
    for (int j = 1; j <= v; j++)
    {
        if (a[i][j] == 1 && vs[j] == 0)
        {
            vs[j] = 1;
            DFS(j);
        }
    }
}
int lienthong()
{
    int l = 0;
    memset(vs, 0, sizeof vs);
    for (int i = 1; i <= v; i++)
    {
        if (vs[i] == 0)
        {
            vs[i] = 1;
            DFS(i);
            l++;
        }
    }
    return l;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> v >> n;
        memset(a, 0, sizeof a);
        e.clear();
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            temp.dau = x;
            temp.cuoi = y;
            e.push_back(temp);
            a[x][y] = a[y][x] = 1;
        }
        int k = lienthong();
        for (int i = 0; i < n; i++)
        {
            a[e[i].dau][e[i].cuoi] = 0;
            a[e[i].cuoi][e[i].dau] = 0;
            int l = lienthong();
            if (l > k)
                cout << e[i].dau << ' ' << e[i].cuoi << ' ';
            a[e[i].dau][e[i].cuoi] = 1;
            a[e[i].cuoi][e[i].dau] = 1;
        }
        cout << endl;
    }
}