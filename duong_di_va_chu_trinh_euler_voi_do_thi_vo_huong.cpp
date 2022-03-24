#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int v, e, a[1005][1005];
bool checkLT()
{
    int vs[v + 5] = {0}, k = 1;
    vector<int> b;
    b.push_back(1);
    vs[1] = 1;
    while (!b.empty())
    {
        int top = b.front();
        for (int i = 1; i <= v; i++)
            if (a[top][i] == 1 && vs[i] == 0)
            {
                vs[i] = 1;
                b.push_back(i);
                k++;
            }
        b.erase(b.begin(), b.begin() + 1);
    }
    if (k == v)
        return true;
    return false;
}
int deg()
{
    int le = 0;
    for (int i = 1; i <= v; i++)
    {
        int dem = 0;
        for (int j = 1; j <= v; j++)
            if (a[i][j] == 1)
                dem++;
        if (dem % 2 != 0)
            le++;
    }
    if (le == 0)
        return 2;
    else if (le < 3)
        return 1;
    return 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> v >> e;
        memset(a, 0, sizeof a);
        for (int i = 0; i < e; i++)
        {
            int x, y;
            cin >> x >> y;
            a[x][y] = a[y][x] = 1;
        }
        if (!checkLT())
            cout << 0;
        else
        {
            cout << deg();
        }
        cout << endl;
    }
}