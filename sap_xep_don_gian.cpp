#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int main()
{
    int n;
    cin >> n;
    int a[n + 5], vt[n + 5], res = 1;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        vt[a[i]] = i;
    }
    int l[n + 5];
    l[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        if (vt[i] > vt[i - 1])
            l[i] = l[i - 1] + 1;
        else
            l[i] = 1;
        res = max(res, l[i]);
    }
    cout << n - res << endl;
}