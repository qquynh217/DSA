#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int n, k, Max = 0;
struct DoVat
{
    int v, w;
} a[105];
int f[105], temp[105];
void save()
{
    for (int i = 1; i <= n; i++)
        f[i] = temp[i];
}
void Try(int i, int currW, int val)
{
    for (int j = 1; j >= 0; j--)
    {
        if (currW + a[i].w * j <= k)
        {
            temp[i] = j;
            currW += a[i].w * j;
            val += a[i].v * j;
            if (i == n)
            {
                if (val > Max)
                {
                    Max = val;
                    save();
                }
            }
            else
                Try(i + 1, currW, val);
            currW -= a[i].w * j;
            val -= a[i].v * j;
        }
    }
}
int main()
{
    int x;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        a[i].v = x;
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        a[i].w = x;
    }
    Try(1, 0, 0);
    cout << Max << endl;
    for (int i = 1; i <= n; i++)
        cout << f[i] << ' ';
}