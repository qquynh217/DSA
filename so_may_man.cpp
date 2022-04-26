#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
void Try(int n)
{
    int d4, d7, res4 = 1e5, res7 = 1e5;
    for (int i = n; i >= 0; i--)
    {
        if (n >= 4 * i && (n - 4 * i) % 7 == 0)
        {
            d4 = i;
            d7 = (n - 4 * i) / 7;
            if (res4 + res7 > d4 + d7)
            {
                res4 = d4;
                res7 = d7;
            }
            else if (res4 + res7 == d4 + d7)
            {
                if (res4 > d4)
                {
                    res4 = d4;
                    res7 = d7;
                }
            }
        }
    }
    if (res4 * 4 + res7 * 7 == n)
    {
        for (int i = 0; i < res4; i++)
            cout << 4;
        for (int i = 0; i < res7; i++)
            cout << 7;
    }
    else
        cout << -1;
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        Try(n);
    }
}