#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int row[8] = {2, 1, -1, -2, -2, -1, 1, 2};
int col[8] = {1, 2, 2, 1, -1, -2, -2, -1};
int u, v;
int res;
struct knight
{
    int x, y, buoc;
};

void Try(int x, int y)
{
    queue<knight> q;
    knight temp;
    temp.x = x;
    temp.y = y;
    temp.buoc = 0;
    q.push(temp);
    while (q.size())
    {
        knight top = q.front();
        q.pop();
        if (top.x == u && top.y == v)
        {
            res = top.buoc;
            return;
        }
        for (int i = 0; i < 8; i++)
        {
            int x1 = top.x + row[i];
            int y1 = top.y + col[i];
            int buoc = top.buoc + 1;
            if (x1 > 0 && y1 > 0 && x1 < 9 && y1 < 9)
            {
                temp.x = x1;
                temp.y = y1;
                temp.buoc = buoc;
                q.push(temp);
            }
        }
    }
}
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string xy, uv;
        cin >> xy >> uv;
        int x, y;
        res = 0;
        x = xy[0] - 'a' + 1;
        y = xy[1] - '0';
        u = uv[0] - 'a' + 1;
        v = uv[1] - '0';
        // cout << x << ' ' << y << ' ' << u << ' ' << v << endl;
        Try(x, y);
        cout << res << endl;
    }
}