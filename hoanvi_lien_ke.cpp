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
        int a[1000];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        int vt = n;
        while (a[vt] < a[vt - 1])
        {
            vt--;
        }
        if (vt > 0)
        {
            for (int j = n; j >= vt; j--)
                if (a[j] > a[vt - 1])
                {
                    swap(a[vt - 1], a[j]);
                    sort(a + vt, a + n + 1);
                    break;
                }
        }
        else
            for (int i = 1; i <= n; i++)
                a[i] = i;
        for (int i = 1; i <= n; i++)
        {
            cout << a[i] << ' ';
        }
        cout << endl;
    }
}