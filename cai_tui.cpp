#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int n, v;
int weight[1005], value[1005];
// Sử dụng quy hoạch động
void QuyHoachDong()
{
    // i là đồ vật thứ i, j là khối lượng max túi có thể lấy
    int a[n + 1][v + 1];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= v; j++)
        {
            if (i == 0 || j == 0)
                a[i][j] = 0;
            else if (j < weight[i])
            {
                a[i][j] = a[i - 1][j];
            }
            else
            {
                a[i][j] = max(a[i - 1][j], value[i] + a[i - 1][j - weight[i]]);
            }
        }
    }
    cout << a[n][v] << endl;
}
// Sử dụng quay lui (TLE)
struct DoVat
{
    int w, v;
} d[1005];
bool cmp(DoVat a, DoVat b)
{
    return (float)a.v / a.w > (float)b.v / b.w;
}
// i: gói hàng thứ i; w: trọng lượng đã có trong túi
int Try(int i, int w, int val)
{
    if (w > v)
        return 0;
    if (i == n && w <= v)
        return val;
    int l = Try(i + 1, w + d[i].w, val + d[i].v);
    int r = Try(i + 1, w, val);
    return max(l, r);
}
void QuayLui()
{
    for (int i = 1; i <= n; i++)
        d[i].w = weight[i];
    for (int i = 1; i <= n; i++)
        d[i].v = value[i];
    sort(d + 1, d + n + 1, cmp);
    cout << Try(1, 0, 0);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> v;
        for (int i = 1; i <= n; i++)
            cin >> weight[i];
        for (int i = 1; i <= n; i++)
            cin >> value[i];
        QuyHoachDong();
    }
}