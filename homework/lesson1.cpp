#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
void bai2()
{
    int n, k;
    cin >> n >> k;
    int a[n + 5];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int vt = 0;
    while (vt < n && a[vt] < k)
    {
        vt++;
    }
    for (int i = n; i >= vt + 1; i--)
        a[i] = a[i - 1];
    a[vt] = k;
    for (int i = 0; i <= n; i++)
        cout << a[i] << " ";
}
void bai1()
{
    int n;
    cin >> n;
    int hec[16] = {0};
    string a;
    int i = 0;
    if (n <= 120)
    {
        while (n > i * 2)
        {
            hec[i] = 1;
            n -= i;
            i++;
        }
        if (n < 16)
            hec[n] = 1;
        else
        {
            hec[i - 1] = 0;
            n += i - 1;
            for (int j = 15; j >= i; j--)
                if (hec[n - j] == 0)
                {
                    hec[n - j] = 1;
                    hec[j] = 1;
                    break;
                }
        }
        for (int j = 15; j >= 0; j--)
            if (hec[j] == 1)
            {
                if (j < 10)
                    a.push_back(j + '0');
                else
                    a.push_back('A' + j - 10);
            }
    }
    cout << a;
}
int main()
{
    bai1();
}