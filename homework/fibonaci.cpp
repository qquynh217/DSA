#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
ll dequy(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return dequy(n - 1) + dequy(n - 2);
}
ll vonglap(int n)
{
    int x = 1, y = 0, res = n;
    if (n <= 1)
        return n;
    else
    {
        for (int i = 2; i <= n; i++)
        {
            res = x + y;
            y = x;
            x = res;
        }
        return res;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << "De quy: " << dequy(n) << endl;
        cout << "Vong lap: " << vonglap(n) << endl;
    }
}