#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int mu(int a, int b)
{
    if (b == 0)
        return 1;
    int x = mu(a, b / 2);
    if (b % 2 == 1)
        return (x * x * a);
    return (x * x);
}
int calc(int a, char dau, int b)
{
    if (dau == '+')
        return a + b;
    if (dau == '-')
        return a - b;
    if (dau == '*')
        return a * b;
    if (dau == '/')
        return a / b;
    if (dau == '^')
        return mu(a, b);
}
void solve(string s)
{
    stack<int> stk;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^')
        {
            int x = stk.top();
            stk.pop();
            int y = stk.top();
            stk.pop();
            stk.push(calc(x, s[i], y));
        }
        else
            stk.push(s[i] - '0');
    }
    cout << stk.top() << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        solve(s);
    }
}