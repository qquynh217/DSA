#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int n, k, a[100], temp = 0;
vector<int> b;
vector<int> s[100];
int t = 0;
void save()
{
    for (int i = 0; i < b.size(); i++)
        s[t].push_back(b[i]);
    t++;
}
void daycon(int i)
{
    for (int j = i; j < n; j++)
    {
        b.push_back(a[j]);
        temp += a[j];
        if (temp == k)
        {
            save();
        }
        else if (temp < k)
        {
            daycon(j + 1);
        }
        b.pop_back();
        temp -= a[j];
    }
}
int main()
{
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    daycon(0);
    for (int i = t - 1; i >= 0; i--)
    {
        for (int j = 0; j < s[i].size(); j++)
            cout << s[i][j] << " ";
        cout << endl;
    }
    cout << t;
}