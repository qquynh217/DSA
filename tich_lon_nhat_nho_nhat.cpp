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
        int n, m;
        cin >> n >> m;
        ll a, b;
        ll max = INT_MIN, min = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            if (a >= max)
                max = a;
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b;
            if (b <= min)
                min = b;
        }
        cout << max * min << endl;
    }
}