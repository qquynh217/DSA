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
        int dem = 0, x;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (x == k)
                dem++;
        }
        if (dem != 0)
            cout << dem << endl;
        else
            cout << -1 << endl;
    }
}