#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int n, k, a[100], check[100] = {0};
void in()
{
    for (int i = 1; i <= n; i++)
        cout << a[i];
    cout << " ";
}
void xaunhiphan(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        a[i] = j;
        if (i == n - 1)
            in();
        else
            xaunhiphan(i + 1);
    }
}
void hoanvi(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (check[j] == 0)
        {
            a[i] = j;
            check[j] = 1;
            if (i == n)
                in();
            else
                hoanvi(i + 1);
            check[j] = 0;
        }
    }
}
void tohop(int i)
{
    for (int j = a[i - 1] + 1; j <= n - k + i; j++)
    {
        a[i] = j;
        if (i == k)
            in();
        else
            tohop(i + 1);
    }
}
int main()
{
    cin >> n >> k;
    // xaunhiphan(0);
    // tohop(1);
    hoanvi(1);
}