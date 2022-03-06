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
        int a[n], check = false;
        for (int i = 1; i <= k; i++)
            cin >> a[i];
        int vt = 0;
        for (int i = 1; i <= k; i++)
        {
            if (a[i] < n - k + i)
            {
                vt = i;
            }
        }

        if (vt != 0)
        {
            a[vt]++;
            for (int j = vt + 1; j <= k; j++)
                a[j] = a[vt] + j - vt;
        }
        else
            for (int i = 1; i <= k; i++)
            {
                a[i] = i;
            }
        for (int i = 1; i <= k; i++)
        {
            cout << a[i] << ' ';
        }
        cout << endl;
    }
}