#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
vector<bool> mark(1000000, true);
void sangEra(int n)
{
    mark[0] = mark[1] = false;
    for (int i = 2; i * i < n; i++)
        if (mark[i])
            for (int j = i * i; j <= n; j += i)
                mark[j] = false;
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, kt = 0;
        cin >> n;
        sangEra(n);
        for (int i = 2; i <= n / 2; i++)
        {
            if (mark[i] && mark[n - i])
            {
                cout << i << ' ' << n - i << endl;
                kt = 1;
                break;
            }
        }
        if (kt == 0)
            cout << -1 << endl;
    }
}