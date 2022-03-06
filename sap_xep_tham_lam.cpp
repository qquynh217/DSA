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
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(a, a + n);
        string kt = "Yes";
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[n - i - 1] && a[i] != b[i])
            {
                kt = "No";
                break;
            }
        }
        cout << kt << endl;
    }
}