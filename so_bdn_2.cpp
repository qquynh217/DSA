#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
string Try(int n)
{
    queue<string> q;
    q.push("1");
    while (q.size() > 0)
    {
        string res = q.front();
        q.pop();
        ll tmp = 0;
        for (int i = 0; i < res.size(); i++)
        {
            tmp = 10 * tmp + (int)(res[i] - '0');
            tmp %= n;
        }
        if (tmp == 0)
            return res;
        q.push(res + '0');
        q.push(res + '1');
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << Try(n) << endl;
    }
}