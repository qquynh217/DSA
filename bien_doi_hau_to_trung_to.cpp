#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
void solve(string s)
{
    stack<string> res;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
        {
            string temp;
            temp = res.top() + temp;
            res.pop();
            temp = s[i] + temp;
            temp = res.top() + temp;
            res.pop();
            temp.push_back(')');
            temp = '(' + temp;
            res.push(temp);
        }
        else
            res.push(string(1, s[i]));
    }
    cout << res.top() << endl;
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