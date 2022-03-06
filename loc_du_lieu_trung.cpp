#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int main()
{
    int n, x;
    cin >> n;
    map<int, int> m;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        m[a[i]] = 1;
    }
    for (int i = 0; i < n; i++)
    {
        if (m[a[i]] != 0)
        {
            cout << a[i] << ' ';
            m[a[i]] = 0;
        }
    }
}