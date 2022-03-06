#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int n, k;
string a;
int t = 0;
vector<string> s;
void save()
{
    int i = 0, max = 0, dem = 0;
    while (i < n)
    {
        if (a[i] == 'A')
            dem++;
        else
            dem = 0;
        if (dem == k)
            max++;
        if (dem > k)
        {
            max = -1;
            break;
        }
        i++;
    }
    if (max == 1)
    {
        s.push_back(a);
        t++;
    }
}
void xauAB(int i)
{
    for (char j = 'A'; j <= 'B'; j++)
    {
        a[i] = j;
        if (i == n - 1)
            save();
        else
            xauAB(i + 1);
    }
}
int main()
{
    cin >> n >> k;
    a.resize(n);
    xauAB(0);
    cout << t << endl;
    for (int i = 0; i < t; i++)
    {
        cout << s[i] << endl;
    }
}