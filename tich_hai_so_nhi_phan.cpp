#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
ll convert(string s)
{
    ll x = 0, p = 1;
    reverse(s.begin(), s.end());
    for (int i = 0; i < s.length(); i++)
    {
        x = x + (s[i] - '0') * p;
        p *= 2;
    }
    return x;
}
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        cout << convert(a) * convert(b) << endl;
    }
}