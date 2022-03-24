#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int n, a[20];
int sum;
vector<vector<int>> s;
vector<int> b;
vector<bool> mark(1000000, true);
void sang(int n)
{
    mark[0] = mark[1] = false;
    for (int i = 2; i * i <= n; i++)
        if (mark[i])
            for (int j = i * i; j <= n; j += i)
                mark[j] = false;
}
void save()
{
    vector<int> temp = b;
    sort(temp.begin(), temp.end(), greater<int>());
    s.push_back(temp);
}
void Try(int i, int l)
{
    for (int j = i; j < n; j++)
    {
        b.push_back(a[j]);
        sum += a[j];
        if (mark[sum])
            save();
        if (l < n - 1)
            Try(j + 1, l + 1);
        sum -= a[j];
        b.pop_back();
    }
}
int main()
{
    int t;
    cin >> t;
    sang(2000);
    while (t--)
    {
        cin >> n;
        sum = 0;
        b.clear();
        s.clear();
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        Try(0, 0);
        sort(s.begin(), s.end());
        for (int i = 0; i < s.size(); i++)
        {
            for (int j = 0; j < s[i].size(); j++)
                cout << s[i][j] << ' ';
            cout << endl;
        }
    }
}