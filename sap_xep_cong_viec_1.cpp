#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
struct CongViec
{
    int s, e;
};
bool cmp(CongViec a, CongViec b)
{
    return a.e < b.e;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        CongViec a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i].s;
        for (int i = 0; i < n; i++)
            cin >> a[i].e;
        sort(a, a + n, cmp);
        int dem = 1, temp = 0;
        for (int i = 1; i < n; i++)
        {
            if (a[temp].e <= a[i].s)
            {
                dem++;
                temp = i;
            }
        }
        cout << dem << endl;
    }
}