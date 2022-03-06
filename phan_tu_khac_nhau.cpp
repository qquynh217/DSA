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
        int a[n], b[n], vt = -1;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n - 1; i++)
        {
            cin >> b[i];
            if (b[i] != a[i] && vt == -1)
                vt = i;
        }
        cout << vt + 1 << endl;
    }
}