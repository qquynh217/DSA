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
        int n, s, m;
        cin >> n >> s >> m;
        if (m * s <= n * (s - s / 7))
        {
            for (int i = 1; i <= s - s / 7; i++)
                if (n * i >= s * m)
                {
                    cout << i << endl;
                    break;
                }
        }
        else
            cout << -1 << endl;
    }
}