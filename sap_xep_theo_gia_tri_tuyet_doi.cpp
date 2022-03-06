#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int x;
bool cmp(int a, int b)
{
    if (abs(a - x) < abs(b - x))
        return true;
    else
        return false;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n >> x;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        stable_sort(a, a + n, cmp);
        for (int i = 0; i < n; i++)
            cout << a[i] << ' ';
        cout << endl;
    }
}