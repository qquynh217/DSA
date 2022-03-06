#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    queue<int> q;
    while (t--)
    {
        string s;
        cin >> s;
        int x;
        if (s == "PUSH")
        {
            cin >> x;
            q.push(x);
        }
        if (s == "PRINTFRONT")
        {
            if (!q.empty())
                cout << q.front() << endl;
            else
                cout << "NONE\n";
        }
        if (s == "POP" && !q.empty())
        {
            q.pop();
        }
    }
}