#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int convert(int a, int m, int n)
{
    int t = 0;
    string s;
    while (a > 0)
    {
        int x = a % 10;
        if (x == m)
            x = n;
        s.push_back(x);
        a /= 10;
    }
    reverse(s.begin(), s.end());
    for (int i = 0; i < s.length(); i++)
        t = t * 10 + s[i];
    return t;
}
int main()
{
    int a, b;
    cin >> a >> b;
    int max = convert(a, 5, 6) + convert(b, 5, 6);
    int min = convert(a, 6, 5) + convert(b, 6, 5);
    cout << min << ' ' << max;
}