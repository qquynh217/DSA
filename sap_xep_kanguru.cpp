#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n, greater<int>());
        int dau = n / 2;
        int sau = dau, dem = n;
        for (int i = 0; i < dau; i++)
        {
            while (sau < n)
            {
                if (a[i] >= a[sau] * 2)
                {
                    dem--;
                    break;
                }
                sau++;
            }
            sau++;
        }
        cout << dem << endl;
    }
}