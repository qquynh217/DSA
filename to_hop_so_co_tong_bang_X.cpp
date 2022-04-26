#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int n, x, a[25], sum;
vector<int> b;
vector<vector<int>> res;
void in(vector<int> c)
{
    for (int i = 0; i < c.size(); i++)
    {
        if (i == 0)
            cout << '[';
        if (i == c.size() - 1)
            cout << c[i] << "]";
        else
            cout << c[i] << ' ';
    }
}
void Try(int i)
{
    for (int j = i; j < n; j++)
    {
        b.push_back(a[j]);
        sum += a[j];
        if (sum == x)
            res.push_back(b);
        else if (sum < x)
            Try(j);
        b.pop_back();
        sum -= a[j];
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> x;
        sum = 0;
        b.clear();
        res.clear();
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        Try(0);
        if (res.empty())
            cout << -1;
        else
        {
            for (int i = 0; i < res.size(); i++)
                in(res[i]);
        }
        cout << endl;
    }
}