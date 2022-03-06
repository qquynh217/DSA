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
        int a[n], res, vt = n, kt = 0;
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (m.find(a[i]) != m.end())
            {
                if (m[a[i]] < vt)
                {
                    vt = m[a[i]];
                    res = a[i];
                    kt = 1;
                }
            }
            else
                m[a[i]] = i;
        }
        if (kt == 0)
            cout << "NO" << endl;
        else
            cout << res << endl;
    }
}