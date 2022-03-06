#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
void in(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
            cout << "[";
        if (i == n - 1)
        {
            cout << a[i] << "]";
        }
        else
        {
            cout << a[i] << ", ";
        }
    }
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
        int a[n], b[n][n], k = n - 1;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[n - 1][i] = a[i];
        }
        for (int i = n - 2; i >= 0; i--)
            for (int j = 0; j < k; j++)
                b[i][j] = b[i + 1][j] + b[i + 1][j + 1];
        for (int i = 0; i < n; i++)
        {
            in(b[i], i + 1);
        }
    }
}