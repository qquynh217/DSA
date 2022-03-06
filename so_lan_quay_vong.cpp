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
        ll a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int vt = n - 1;
        while (vt >= 0 && a[vt] > a[vt - 1])
        {
            vt--;
        }
        cout << vt << endl;
    }
}