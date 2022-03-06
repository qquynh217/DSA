#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
void solve(string s)
{
    vector<char> v;
    bool kt = true;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ')')
        {
            bool check = false;
            int j = v.size() - 1;
            while (v[j] != '(' && j >= 0)
            {
                if (v[j] == '+' || v[j] == '-' || v[j] == '*' || v[j] == '/')
                    check = true;
                v.pop_back();
                j--;
            }
            v.pop_back();
            if (check == false)
                kt = false;
        }
        else
            v.push_back(s[i]);
    }
    if (kt == false)
        cout << "Yes\n";
    else
        cout << "No\n";
}
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        solve(s);
    }
}