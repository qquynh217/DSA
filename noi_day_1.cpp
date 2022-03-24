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
        ll x;
        priority_queue<ll, vector<ll>, greater<ll>> a;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            a.push(x);
        }
        ll res = 0;
        while (a.size() > 1)
        {
            int x = a.top();
            a.pop();
            int y = a.top();
            a.pop();
            res += x + y;
            a.push(x + y);
        }
        cout << res << endl;
    }
}