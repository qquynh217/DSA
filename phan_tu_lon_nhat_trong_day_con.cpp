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
        int a[n + 5];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0, j = k; j <= n; i++, j++)
        {
            int Max = *max_element(a + i, a + j);
            cout << Max << " ";
        }
        cout << endl;
    }
}