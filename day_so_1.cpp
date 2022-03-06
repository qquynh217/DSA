#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int n, a[20];
void in(int k)
{
    for (int i = 0; i < k; i++)
    {
        if (i == 0)
            cout << '[';
        cout << a[i];
        if (i < k - 1)
            cout << ' ';
        else
            cout << ']';
    }
    cout << endl;
}
void daySo(int k)
{
    int b[20];
    for (int i = 0; i < k; i++)
    {
        b[i] = a[i] + a[i + 1];
    }
    for (int i = 0; i < k; i++)
        a[i] = b[i];
    in(k);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int k = n;
        in(k);
        while (k--)
        {
            daySo(k);
        }
    }
}