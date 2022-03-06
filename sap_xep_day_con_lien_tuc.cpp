#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(a, a + n);
        int dau = 0, cuoi = n - 1;
        while (dau < n && a[dau] == b[dau])
        {
            dau++;
        }
        while (cuoi > 0 && a[cuoi] == b[cuoi])
        {
            cuoi--;
        }
        if (dau < cuoi)
            cout << dau + 1 << " " << cuoi + 1 << endl;
    }
}