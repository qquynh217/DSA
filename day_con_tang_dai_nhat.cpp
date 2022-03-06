#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int main()
{
    int n;
    cin >> n;
    int a[1005], s[1005];
    int res = 1;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        s[i] = 1;
        for (int j = 0; j < i; j++)
        {
            if (a[j] < a[i])
            {
                s[i] = max(s[j] + 1, s[i]);
            }
        }
        if (s[i] > res)
            res = s[i];
    }
    cout << res;
}