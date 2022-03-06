#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
// Dùng mảng đánh dấu tổng có tồn tại trong dãy không
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[205], n, s;
        cin >> n >> s;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        int kt = 0, f[50000] = {0};
        f[s] = 0;
        f[0] = 1;
        for (int i = 1; i <= n; i++)
        {
            for (int j = s; j >= a[i]; j--)
            {
                if (f[j] == 0 && f[j - a[i]] == 1)
                    f[j] = 1;
            }
        }
        if (f[s])
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
}