#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
void solve(int v, int e)
{
    int a[v + 1][v + 1] = {0};
    for (int i = 1; i <= e; i++)
    {
        int x, y;
        cin >> x >> y;
        a[x][y] = 1;
    }
    for (int i = 1; i <= v; i++)
    {
        cout << i << ": ";
        for (int j = 1; j <= v; j++)
            if (a[i][j] == 1)
                cout << j << " ";
        cout << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int v, e;
        cin >> v >> e;
        solve(v, e);
    }
}