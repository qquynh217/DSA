#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
string Sum(string a, string b, int k)
{
    string sum = "";
    while (a.length() < b.length())
        a = "0" + a;
    while (a.length() > b.length())
        b = "0" + b;
    int du = 0;
    for (int i = b.length() - 1; i >= 0; i--)
    {
        int x = (b[i] - '0') + (a[i] - '0') + du;
        du = x / k;
        x = x % k;
        sum = char(x + '0') + sum;
    }
    if (du > 0)
        sum = char(du + '0') + sum;
    return sum;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        string a, b;
        cin >> k >> a >> b;
        cout << Sum(a, b, k) << endl;
    }
}