#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int a[100000] = {0}, n, t;
void inChan()
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }
    for (int i = n - 1; i >= 0; i--)
    {
        cout << a[i] << "\t";
    }
    cout << "\n";
}
void inLe()
{
    for (int j = 0; j < 2; j++)
    {
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << "\t";
        }
        cout << j << "\t";
        for (int i = n - 1; i >= 0; i--)
        {
            cout << a[i] << "\t";
        }
        cout << "\n";
    }
}
void sinhXau(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        a[i] = j;
        if (i == n - 1)
        {
            if (t % 2 == 0)
                inChan();
            else
                inLe();
        }
        else
            sinhXau(i + 1);
    }
}
int main()
{
    cin >> t;
    n = t / 2;
    sinhXau(0);
}