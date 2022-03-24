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
        ll n;
        cin >> n;
        ll x, res = 0;
        priority_queue<ll, vector<ll>, greater<ll>> a;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            a.push(x);
        }
        while (a.size() > 1)
        {
            int x = a.top();
            a.pop();
            int y = a.top();
            a.pop();
            res = (res + x + y) % P;
            a.push((x + y) % P);
        }
        cout << res << endl;
    }
}