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
        int n, k;
        cin >> n >> k;
        int a[k + 5], b[k + 5];
        for (int i = 1; i <= k; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        int vt = 0, dem = 0;
        for (int i = k; i > 0; i--)
            if (a[i] < n - k + i)
            {
                vt = i;
                break;
            }
        if (vt == 0)
        {
            cout << 4;
        }
        else
        {
            a[vt]++;
            if (!binary_search(b + 1, b + k + 1, a[vt]))
                dem++;
            for (int i = vt + 1; i <= k; i++)
            {
                a[i] = a[vt] + i - vt;
                if (!binary_search(b + 1, b + k + 1, a[i]))
                    dem++;
            }
            cout << dem;
        }
        cout << endl;
    }
}