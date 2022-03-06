#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
ll fi[100];
void Fibo()
{
    int k = 0;
    fi[1] = 1;
    fi[2] = 1;
    for (int i = 3; i <= 92; i++)
    {
        fi[i] = fi[i - 2] + fi[i - 1];
    }
}
char res(ll n, ll k)
{
    if (n == 1)
        return 'A';
    if (n == 2)
        return 'B';
    if (k <= fi[n - 2])
        return res(n - 2, k);
    else
        return res(n - 1, k - fi[n - 2]);
}
int main()
{
    int t;
    cin >> t;
    Fibo();
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        cout << res(n, k) << endl;
    }
}