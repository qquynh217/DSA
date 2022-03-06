#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int a[100005];
void solve()
{
    a[1] = 0;
    a[2] = a[3] = 1;
    for (int i = 4; i <= 100000; i++)
    {
        int Min = a[i - 1];
        if (i % 2 == 0)
            Min = min(Min, a[i / 2]);
        if (i % 3 == 0)
            Min = min(Min, a[i / 3]);
        a[i] = Min + 1;
    }
}
int main()
{
    int t;
    cin >> t;
    solve();
    while (t--)
    {
        int n;
        cin >> n;
        cout << a[n] << endl;
    }
}