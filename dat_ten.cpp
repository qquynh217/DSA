#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int n, k, a[100];
void in()
{
    char s = 64;
    for (int i = 1; i <= k; i++)
        cout << char(s + a[i]);
    cout << endl;
}
void toHop(int i)
{
    for (int j = a[i - 1] + 1; j <= n - k + i; j++)
    {
        a[i] = j;
        if (i == k)
            in();
        else
            toHop(i + 1);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        toHop(1);
    }
}