#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int main()
{
    int n;
    cin >> n;
    int a[n + 5], chan[n], le[n];
    int c = 1, l = 1;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (i % 2 == 0)
            chan[c++] = a[i];
        else
            le[l++] = a[i];
    }
    sort(le + 1, le + l);
    sort(chan + 1, chan + c, greater<int>());
    int k = 1;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            cout << chan[i / 2] << ' ';
        else
            cout << le[i / 2 + 1] << ' ';
    }
}