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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int res = 1;
        for (int i = 1; i < n; i++)
        {
            int j = i, k;
            if (j && a[i] > a[i - 1])
                k = 2;
            else
                k = 1;
            while (i + 1 < n && a[i] < a[i + 1])
                i++;
            while (i + 1 < n && a[i] > a[i + 1])
                i++;
            res = max(res, i - j + k);
        }
        cout << res << endl;
    }
}