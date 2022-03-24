#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int v, e, a[1005][1005], degv[1005], degr[1005];
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
        if (degv[i] != degr[i])
            return 0;
    if (le == 0)
        return 1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> v >> e;
        memset(a, 0, sizeof a);
        memset(degv, 0, sizeof degv);
        memset(degr, 0, sizeof degr);
        for (int i = 0; i < e; i++)
        {
            int x, y;
            cin >> x >> y;
            a[x][y] = a[y][x] = 1;
            degr[x]++;
            degv[y]++;
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