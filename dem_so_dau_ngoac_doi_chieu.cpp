#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
void solve(string s)
{
    stack<char> stk;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' || (s[i] == ')' && stk.empty()))
            stk.push(s[i]);
        else if (s[i] == ')')
        {
            if (stk.size() > 0 && stk.top() == '(')
                stk.pop();
            else
                stk.push(s[i]);
        }
    }
    int dm = 0, dd = 0;
    while (stk.size() > 0)
    {
        if (stk.top() == '(')
            dm++;
        else
            dd++;
        stk.pop();
    }
    int res = dm / 2 + dd / 2 + dm % 2 + dd % 2;
    cout << res << endl;
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