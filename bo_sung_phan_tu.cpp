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
        int a[10000];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        int dem = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i + 1] - a[i] > 1)
            {
                dem += a[i + 1] - a[i] - 1;
            }
        }
        cout << dem << endl;
    }
}