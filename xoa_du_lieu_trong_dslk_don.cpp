#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int main()
{
    int n, x;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != x)
            cout << a[i] << ' ';
    }
}