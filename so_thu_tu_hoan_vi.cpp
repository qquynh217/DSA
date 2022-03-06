#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int n, a[15], b[15], res, dem;
int check[15] = {0};
bool sosanh()
{
    for (int i = 1; i <= n; i++)
    {
        if (a[i] != b[i])
            return false;
    }
    return true;
}
void hoanvi(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (check[j] == 0)
        {
            b[i] = j;
            check[j] = 1;
            if (i == n)
            {
                if (sosanh() == false)
                    dem++;
                else
                    res = dem;
            }
            else
                hoanvi(i + 1);
            check[j] = 0;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        dem = 1;
        hoanvi(1);
        cout << res << endl;
    }
}