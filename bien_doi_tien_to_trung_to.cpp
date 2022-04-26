#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
void solve(string s)
{
    stack<string> stk;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^')
        {
            string fi = stk.top();
            stk.pop();
            string se = stk.top();
            stk.pop();
            string temp = "(" + fi + s[i] + se + ")";
            stk.push(temp);
        }
        else
            stk.push(string(1, s[i]));
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