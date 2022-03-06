#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    int max = a[0] * a[1];
    max = max > a[0] * a[1] * a[n - 1] ? max : a[0] * a[1] * a[n - 1];
    max = max > a[n - 2] * a[n - 1] ? max : a[n - 2] * a[n - 1];
    max = max > a[0] * a[1] ? max : a[0] * a[1];
    max = max > a[n - 2] * a[n - 1] * a[n - 3] ? max : a[n - 2] * a[n - 1] * a[n - 3];
    cout << max;
}