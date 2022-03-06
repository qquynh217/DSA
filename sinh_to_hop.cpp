#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int n, k;
int a[100];
void in()
{
    for (int i = 1; i <= k; i++)
    {
        cout << a[i];
    }
    cout << " ";
}
void sinhToHop(int i)
{
    for (int j = a[i - 1] + 1; j <= n - k + i; j++)
    {
        a[i] = j;
        if (i == k)
            in();
        else
            sinhToHop(i + 1);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        sinhToHop(1);
        cout << endl;
    }
}