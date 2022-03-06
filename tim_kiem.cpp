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
        int a[n], kt = -1;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == k)
                kt = 1;
        }
        cout << kt << endl;
    }
}