#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int a[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
int solve(int n)
{
    int res = 0;
    for (int i = 9; i >= 0; i--)
    {
        int thuong = n / a[i];
        n = n - (a[i] * thuong);
        res += thuong;
    }
    return res;
}
int main()
{
    int t;

    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << solve(n) << endl;
    }
}