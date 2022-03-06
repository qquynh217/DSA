#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int main()
{
    int t, x;
    cin >> t;
    deque<int> q;
    cin.ignore();
    while (t--)
    {
        string s;
        cin >> s;
        if (s == "PUSHFRONT")
        {
            cin >> x;
            q.push_front(x);
        }
        if (s == "PRINTFRONT")
        {
            if (!q.empty())
                cout << q.front() << endl;
            else
                cout << "NONE\n";
        }
        if (s == "POPFRONT" && !q.empty())
            q.pop_front();
        if (s == "PUSHBACK")
        {
            cin >> x;
            q.push_back(x);
        }
        if (s == "PRINTBACK")
        {
            if (!q.empty())
                cout << q.back() << endl;
            else
                cout << "NONE\n";
        }
        if (s == "POPBACK" && !q.empty())
            q.pop_back();
    }
}