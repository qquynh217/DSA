#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        cin.ignore();
        string s;
        cin >> s;
        map<char, int> m;
        for (int i = 0; i < s.length(); i++)
            m[s[i]]++;
        priority_queue<int, vector<int>> q;
        for (auto i : m)
            q.push(i.second);
        while (k--)
        {
            int x = q.top();
            q.pop();
            x--;
            q.push(x);
        }
        int res = 0;
        while (!q.empty())
        {
            res += q.top() * q.top();
            q.pop();
        }
        cout << res << endl;
    }
}